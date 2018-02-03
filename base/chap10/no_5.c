// 演示包含指针的结构体

#include <stdio.h>

int main () {

    struct intPtrs {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;

    int i1 = 10, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf ("i1 = %i, *pointers.p1 = %i,\n", i1, *pointers.p1);
    printf ("i2 = %i, *pointers.p2 = %i,\n", i2, *pointers.p2);

    return 0;
}
