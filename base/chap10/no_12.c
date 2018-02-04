/*
 * 对一个整数数组的求和，第二版，区别与no_11.c
 * @author kdyoung
 */
#include <stdio.h>

int arraySum (int *array, const int n) {
    int sum = 0;
    int * const arrayEnd = array + n;

    for (; array < arrayEnd; ++array) {
        printf ("%i\n", *array);
        sum += *array;
    }
    return sum;
}

int main () {

    int arraySum (int *array, const int n);
    int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf ("The sum fo values is %i.\n", arraySum (values, 10));

    return 0;
}
