SECTION .data
message db 	'Hello, Holberton', 10 	;newline at the end (10)
SECTION .text
global main

main:
	mov rax, 1 		; system call for write
	mov rdi, 1 		; file handle 1 is stdout
	mov rsi, message 	; address of string to output
	mov rdx, 17		; number of bytes (hello, holberton has 17 chars)
	syscall			; invoke OS to write
	mov rax, 60		; system call for exit
	xor rdi, rdi		; exit code 0
	syscall			; invoke OS to exit
