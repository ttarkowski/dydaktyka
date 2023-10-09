;; Styl imperatywny w asemblerze

SYS_EXIT equ 60

section bss

section data

section .text
        global _start

_start:
        mov rcx, 1000000000

loop:
        dec rcx         ; Dekrementacja rejestru rcx (licznika pętli).
        jnz loop        ; Skok do etykiety rozpoczynającej pętlę.
        ;; (Powyższe dwie instrukcje można skrócić za pomocą loop.)

exit:
        mov eax, SYS_EXIT
        xor edi, edi
        syscall
