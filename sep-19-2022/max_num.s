	push rbp
	mov rbp, rsp
	mov DWORD PTR[rbp - 4], 6
	mov DWORD PTR[rbp - 8], 10
	mov eax, DWORD PTR[rbp - 4]
	cmp eax, DWORD PTR[rbp - 8]
	jg L1
	cout DWORD PTR[rbp - 8]

end:	pop ebp
	ret

L1: 	cout eax
	jmp end
