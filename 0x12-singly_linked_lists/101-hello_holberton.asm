extern printf

section	.data
	msg	db	'Hello, Holberton', 10, 0 ; 10 is ASCII code for newline
	fmt	db	'%s\n', 0

section	.text
	global	main

main:
	; Set up stack frame
	push	rbp
	mov	rbp, rsp

	; Call printf with message and format string
	mov	rdi, fmt
	mov	rsi, msg
	xor	rax, rax
	call	printf

	; Clean up stack and return
	mov	rsp, rbp
	pop	rbp
	xor	eax, eax
	ret

