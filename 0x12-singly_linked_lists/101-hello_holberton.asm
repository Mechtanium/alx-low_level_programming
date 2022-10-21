global main
extern printf

section .text
main:
    push rbp
    mov rbp, rsp


    ;function body
    xor eax, eax
    lea rdi, [msg]
    call printf


    add rsp, 16
    leave
    ret

section .data
    msg: db "Hello, Holberton", 0

section .bss
