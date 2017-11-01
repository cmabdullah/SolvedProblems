  %define CM 0x2000004
  %define C2  0x2000001

global start
start:
  mov rdi, 1
  mov rsi, str
  mov rdx, strlen
  mov rax, CM
  syscall

  mov rax, C2
  mov rdi, 0
  syscall

section .data
str:
  db `Hello, C M\n`
strlen equ $ - str

