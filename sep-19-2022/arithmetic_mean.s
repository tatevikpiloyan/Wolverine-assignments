	push rbp
	mov rbp, rsp
	mov DWORD PTR[rbp - 4], 23
	mov DWORD PTR[rbp - 8], 423
	mov DWORD PTR[rbp - 12], 65
	mov eax, DWORD PTR[rbp - 4]
	mov ebx, DWORD PTR[rbp - 8]
	add eax, ebx
	mov ebx, DWORD PTR[rbp - 12]
	add eax, ebx
	mov ebx, 3
	div eax, ebx
	mov DWORD PTR[rbp - 16], eax
	pop rbp
	ret
