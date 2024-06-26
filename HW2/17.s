;posneg: test if registers are positive or negative.
;        if ( eax >= 0 ) { var1 = 1 } else { var1 = -1 }
;        if ( ebx >= 0 ) { var2 = 1 } else { var2 = -1 }
;        if ( ecx >= 0 ) { var3 = 1 } else { var3 = -1 }
;        if ( edx >= 0 ) { var4 = 1 } else { var4 = -1 }
;======
;      var1 @ 0x600000-600004
;      var2 @ 0x600004-600008
;      var3 @ 0x600008-60000c
;      var4 @ 0x60000c-600010
;=====

cmp eax, 0
JGE  L1 
mov rax, -1
mov [0x600000], rax
jmp L2            
L1: 
mov rax, 1
mov [0x600000], rax

L2:
cmp ebx, 0
JGE  L3 
mov rax, -1
mov [0x600004], rax
jmp L4            
L3: 
mov rax, 1
mov [0x600004], rax
L4:

cmp ecx, 0
JGE  L5 
mov rax, -1
mov [0x600008], rax
jmp L6            
L5: 
mov rax, 1
mov [0x600008], rax
L6:

cmp edx, 0
JGE  L7 
mov rax, -1
mov [0x60000c], rax
jmp L8            
L7: 
mov rax, 1
mov [0x60000c], rax
L8: