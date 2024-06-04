;loop15:
;        str1 is a string contains 15 lowercase and uppercase alphbets. 
;        implement a loop to convert all alplabets to lowercase,        
;        and store the result in str2.
;======
;      str1 @ 0x600000-600010
;      str2 @ 0x600010-600020
;======

mov eax, 0
mov ecx, 15
Loop:
    mov ebx, [0x600000+eax]
    or ebx, 0x20
    mov [0x600010+eax],ebx
    inc eax 
    loop Loop
