section .data
	hello db "Hello, Holberton",0
	format db "%s",0
	newline db 10,0
section .text
	global main
	extern printf
main:
	; Call printf
	mov rdi, format
	mov rsi, hello
	call printf

	; Print a new line
	mov rdi, format
	mov rsi, hello
	call printf

	; Exit the program
	mov rax, 60	; syscall number for exit
	xor rdi, rdi	; exit status: 0
	syscall
	; ...
	; Call printf
	mov rdi, format
	mov rsi, hello
	call printf

	; Print a new line
	mov rdi, format
	mov rsi, newline  ; Change this to newline
	call printf
	; ...
