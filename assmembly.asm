        .section        __TEXT,__text,regular,pure_instructions
        .globl  _main
        .align  4, 0x90
_main:
        pushq   %rbp
        movq    %rsp, %rbp
        subq    $16, %rsp
        movl    $30, -4(%rbp)     # a = 30;
        leaq    -4(%rbp), %rax    # &a
        movq    %rax, -8(%rbp)    # v = &a;
        movq    -8(%rbp), %rax    # Load value from v
        movl    (%rax), %eax      # Load value from memory address pointed by v
        movl    %eax, %esi
        movl    $.L.str, %edi
        movl    $0, %eax
        callq   _printf            # printf("This is the data in the pointer : %d\n", *v);
        movq    -8(%rbp), %rax    # Load value from v
        movl    (%rax), %eax      # Load value from memory address pointed by v
        addl    $2, %eax          # *v = *v + 2;
        movq    -8(%rbp), %rax    # Load value from v
        movl    %eax, (%rax)      # Store the updated value in memory address pointed by v
        movl    -4(%rbp), %eax    # Load value of a
        movl    %eax, %esi
        movl    $.L.str1, %edi
        movl    $0, %eax
        callq   _printf           # printf("This Changed memory value of pointer : %d\n", a);
        movl    $0, %eax
        addq    $16, %rsp
        popq    %rbp
        retq

        .section        __TEXT,__cstring,cstring_literals
.L.str:
        .asciz  "This is the data in the pointer : %d\n"
.L.str1:
        .asciz  "This Changed memory value of pointer : %d\n"
