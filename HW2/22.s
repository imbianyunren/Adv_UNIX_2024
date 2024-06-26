;ul+lu: convert the alphabet in CH from upper to lower or from lower to upper
;======


cmp ch, 0x60
jl  Less  
sub ch, 0x20   
jmp Both            
Less: 
add ch, 0x20  
Both:
