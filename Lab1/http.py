from pwn import *

response = remote('34.117.186.192', 80)
response.send(b'GET /ip HTTP/1.1\nHost: ipinfo.io\nUser-Agent: curl/7.88.1\nAccept: */*\r\n\r\n')
# print(response.recvline())
response.interactive()
response.close()

