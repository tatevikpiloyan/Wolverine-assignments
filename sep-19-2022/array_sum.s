	push rbp
	mov rbp, rsp
	mov DWORD PTR[rbp - 4], 4
	mov DWORD PTR[rbp - 28], 2
	mov DWORD PTR[rbp - 24], 32
	mov DWORD PTR[rbp - 20], 43
	mov DWORD PTR[rbp - 16], 1
	mov DWORD PTR[rbp - 12], 0
	mov DWORD PTR[rbp - 8], 0
	jmp L1

L2:	mov eax, DWORD PTR[rbp - 8]
	mov eax, DWORD PTR[rbp - 28 + rax * 4]
	add DWORD PTR[rbp - 12], eax
	add DWORD PTR[rbp - 8], 1

L1:	cmp DWORD PTR[rbp - 8], DWORD PTR[rbp - 4]
    	jl L2

	pop rbp
	ret
