// 演示指针

#include <stdio.h>

int main () {
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;
    
    count++;

    printf ("count = %i,\n*int_pointer = %i, \nx = %i \n", count, *int_pointer, x);

    return 0;
}
