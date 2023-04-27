bits 64
    global main
    extern printf

    section .text
main:
    ; function setup
    push    rbp
    mov     rbp, rsp
    sub     rsp, 32
    ;
    lea     rdi, [rel message]
    mov     al, 0
    call    printf

    ; function return
    mov     eax, 0
    add     rsp, 32
    pop     rbp
    ret

    section .data
message: db   "Hello, Holberton",0xA
