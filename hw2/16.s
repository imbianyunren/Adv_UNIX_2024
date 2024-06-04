;mulbyshift: multiply val1 by 26 and store the result in val2
;======
;      val1 @ 0x600000-600004
;      val2 @ 0x600004-600008


mov eax, [0x600000]
mov ebx, 26
imul eax, ebx
mov [0x600004], eax
