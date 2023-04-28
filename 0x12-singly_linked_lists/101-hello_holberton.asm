section .data
    message db 'Hello, Holberton',0Ah ; message to be printed, 0Ah represents a new line

section .text
    global main ; make main function visible to linker

main:
    ; prepare arguments for printf function
    push message ; push message address
    call printf ; call printf function
    add rsp, 8 ; pop arguments from stack
    ret ; return from main function

