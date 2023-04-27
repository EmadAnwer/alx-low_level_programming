        extern puts
        global main

        section .rodata
msg:    db "Hello, Holberton", 0

        section .text
main:
        ;;  puts (msg)
        mov rdi, msg
        call puts wrt ..plt

        ;;  return 0
        mov eax, 0
        ret
