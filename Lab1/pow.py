

#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import base64
import hashlib
import time
import sys
from pwn import *

def solve_pow(r):
    prefix = r.recvline().decode().split("'")[1];
    print(time.time(), "solving pow ...");
    print(prefix);
    solved = b''
    for i in range(1000000000):
        h = hashlib.sha1((prefix + str(i)).encode()).hexdigest();
        if h[:6] == '000000':
            solved = str(i).encode();
            print("solved =", solved);
            break;
    print(time.time(), "done.");
    r.sendlineafter(b'string S: ', base64.b64encode(solved));


def num(word):
    if word =="  ─┐  \n   │  \n   │  \n   │  \n  ─┴─ " :
        return '1';
    elif  word ==" ┌───┐\n     │\n ┌───┘\n │    \n └───┘" :
        return '2';
    elif  word ==" ┌───┐\n     │\n  ───┤\n     │\n └───┘" :
        return '3';
    elif  word ==" │   │\n │   │\n └───┤\n     │\n     │" :
        return '4';
    elif  word ==" ┌────\n │    \n └───┐\n     │\n └───┘" :
        return '5';
    elif  word ==" ┌───┐\n │    \n ├───┐\n │   │\n └───┘" :
        return '6';
    elif  word ==" ┌───┐\n │   │\n     │\n     │\n     │" :
        return '7';
    elif  word ==" ┌───┐\n │   │\n ├───┤\n │   │\n └───┘" :
        return '8';
    elif  word ==" ┌───┐\n │   │\n └───┤\n     │\n └───┘" :
        return '9';
    elif  word ==" ┌───┐\n │   │\n │   │\n │   │\n └───┘" :
        return '0';
    elif  word =="      \n  ╲ ╱ \n   ╳  \n  ╱ ╲ \n      " :
        return '*';
    elif  word =="      \n   │  \n ──┼──\n   │  \n      " :
        return '+';
    elif  word =="      \n   •  \n ─────\n   •  \n      " :
        return '/';
    else :
        return '#';


def sol2dword(q):
    words = []
    line = q.find('\n')+1
    numbers = int(line / 7)
    strr = ''
    prefix = ''
    n1 = 0
    n2 = 0
    for j in range(0,numbers):
        i = j*7
        word = q[0+i:6+i]+'\n'+q[line+i:line+6+i]+'\n'+q[line*2+i : line*2 + 6+i]+ '\n'+q[line*3+i : line*3 + 6+i]+'\n'+q[line*4+i : line*4 + 6+i];
        # print(word)
        # print(num(word))
        ret = num(word)

        if (ret != "*") & (ret != "+") & (ret != "/"):
            strr = strr + ret
        else:
            prefix = ret
            n1 = int(strr)
            strr = ''
        if j == numbers-1:
            n2 = int(strr)
        # print("here:" + str(n1) + " "+ str(n2))

    if prefix == "*":
        ans = n1*n2
    if prefix == "+":
        ans = n1+n2
    if prefix == "/":
        ans = int(n1/n2)
    # words.append();
    # print(ans)
    r.sendline(str(ans).encode());



if __name__ == "__main__":
    r = None
    if len(sys.argv) == 2:
        r = remote('localhost', int(sys.argv[1]))
    elif len(sys.argv) == 3:
        r = remote(sys.argv[2], int(sys.argv[1]))
    else:
        r = process('./pow.py')
    solve_pow(r);


    r.recvline().decode();
    r.recvline().decode();
    r.recvline().decode();
    q_num = r.recvline().decode();
    q_num_ = int(q_num.split(' ')[3])
    r.recvline().decode();
 







    # r.sendline(str(100).encode());
    for i in range(0,q_num_):
        question= r.recv(700).decode();
        # print("test" + question+"\n");
        q_ = question.split(' ');
        question = base64.b64decode(q_[2]).decode('utf-8');
        # print(question);
        sol2dword(question);
    r.interactive();
    r.close();

# vim: set tabstop=4 expandtab shiftwidth=4 softtabstop=4 number cindent fileencoding=utf-8 :

