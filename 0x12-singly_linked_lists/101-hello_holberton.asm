
        section .data
message:                                ; Define message output
        db      "Hello, Holberton", 0   ; Store a string format "Hello, ...." and add a null character

format:                                 ; Define message format
        db      "%s", 10, 0             ; Store %s which tells call fxn to print a string and  a new line.

	global	main			; Declare main as a global variable
	extern	printf			; Declare printf fxn as an external symbol
	section	.text			; the code section
main:
	mov	rsi, message		; first parameter for printf
	mov	rdi, format		; second parameter for printf
	mov	rax, 0			; move the value 0 to the RAX register
	call	printf			; call printf,passing message and format as parameters

	mov	rax, 0			; move the value 0 to the RAX register
	ret				; Return from the main function


