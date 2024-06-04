;dispbin:
;        given a number in AX, store the corresponding bit string in str1.
;        for example, if AX = 0x1234, the result should be:
;        str1 = 0001001000111000
;======
;      str1 @ 0x600000-600014
;======

dispbin:
    xor esi, esi        
    xor ebx, ebx        
    mov ecx, 16         

convert_loop:
    bt eax, 15          
    jnc zero_bit        
    mov bl, '1'         
    jmp store_bit       

zero_bit:
    mov bl, '0'         

store_bit:
    mov [0x600000 + esi], bl   
    inc esi                 
    shl eax, 1              
    loop convert_loop       