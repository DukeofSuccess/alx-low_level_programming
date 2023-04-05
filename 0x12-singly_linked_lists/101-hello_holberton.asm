	SECTION .data
	format db "Hello, Holberton", 10

	SECTION .text
	global main

	extern printf

main:
	mov edi, format
	xor eax, eax
	call printf

	xor eax, eax
	ret
	
