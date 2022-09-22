	push rbp
	mov rbp, rsp
	mov DWORD PTR[rbp - 4], 6
	mov DWORD PTR[rbp - 8], 10
	mov eax, DWORD PTR[rbp - 4]
	mov ebx, DWORD PTR[rbp - 8]
	cmp eax, ebx
	ja L1
	cout y

end: pop ebp
	 ret

L1: cout x
	jmp end
