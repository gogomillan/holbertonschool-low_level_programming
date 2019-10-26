section     .text                     ; code
global      main                      ; program entry, used by ld

main:                                 ; tell linker entry point
                                      ; set up for write() system call
    mov     eax,4                     ; set system call # (4 = sys_write)
                                      ; // now set the arguments
                                      ; // write(int fd, const void *buf, size_t count);
    mov     ebx,1                     ; file desc (1 = stdout) // fd
    mov     ecx,msg                   ; string                 // buf
    mov     edx,len                   ; string length          // count

    int     0x80                      ; interrupt to kernel
                                      ; set up for exit() system call
    mov     eax,1                     ; set system call # (1 = sys_exit)
                                      ; ebx has error code
    int     0x80                      ; call kernel

section     .data                     ; initialized global variables,
                                      ; used in code above

msg     db  'Hello, Holberton',0xa    ; define string, `db` = 8  bit variable (char)
                                      ; 0xa = 10 = newline character in ASCII
len     equ $ - msg                   ; define string len
