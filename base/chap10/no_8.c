//演示函数与指针的使用

#include <stdio.h>

void test (int *int_pointer) {
    *int_pointer = 100;
}

int main () {

    void test (int *int_pointer);
    int i = 50, *p = &i;

    printf ("Before the call to test i = %i, *p = %i.\n", i, *p);
    i = 80;
    printf ("Before the call to test i = %i, *p = %i.\n", i, *p);

    test (p);

    printf ("After the call to test i = %i.\n", i);

    return 0;
}
