section .text

global main

mov rdi,fmt
mov rsi,msg
moc rax,0
call printf

pop rbp

mov rax,0
ret

section .data
msg db 'Hello, Holberton' , 0
db "%s", 10, 0
