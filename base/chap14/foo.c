#include <stdio.h>

extern int i; // 从本文件外部引入一个定义为i的变量及其值

char foo (int b)
{
    printf ("进入foo函数时，i = %i\n", i);
    i = 100;

    printf ("%i\t",i++);

    return 'h';
}

