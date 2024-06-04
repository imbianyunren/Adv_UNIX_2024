;leax:
;        eax = edi * 2
;        ebx = edi * 3
;        ecx = edi * 5
;        edx = edi * 9
;======
lea eax, [edi+edi] ; multiply by 2
lea ebx, [edi*2+edi] ; multiply by 3
lea ecx, [edi*4+edi] ; multiply by 5
lea edx, [edi*8+edi] ; multiply by 9
 ;https://stackoverflow.com/questions/10512109/why-can-assembly-instructions-contain-multiplications-in-the-lea-instruction