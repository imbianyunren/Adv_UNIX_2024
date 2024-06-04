;recur: implement a recursive function

;   r(n) = 0, if n <= 0
;        = 1, if n == 1
;        = 2*r(n-1) + 3*r(n-2), otherwise

;   please call r(25) and store the result in RAX
;======
;======
;Enter your codes: (type 'done:' when done)


push 15
call recursive
jmp EXIT

recursive:
    push rbp
    mov rbp, rsp
    mov rbx, [rbp+0x10] ; Load n

    cmp rbx, 0
    jle base_case_0  
    cmp rbx, 1
    je base_case_1    

    dec rbx     ; n-1 
    push rbx    ; Save n-1 for recursive call  
    call recursive

    mov rcx, 2  
    mul rcx        
    pop rbx     ; Restore n-1
    push rax    ; Save 2*r(n-1)

    dec rbx     ; n-2
    push rbx    ; Save n-2 for recursive call
    call recursive

    mov rdx, 3
    mul rdx   ; Multiply r(n-2) by 3 -> rax = 2*r(n-1)
    pop rbx   ; Restore n-2
    pop rbx   ; Restore 2*r(n-1)
    add rax, rbx  ; Add 2*r(n-1) + 3*r(n-2)
    jmp return

base_case_0:
    mov rax, 0
    jmp return

base_case_1:
    mov rax, 1
    jmp return

return:
    mov rsp, rbp
	pop rbp
	ret


EXIT:
done:






