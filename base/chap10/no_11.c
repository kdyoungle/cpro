/* 对一个整数数组中的各元素进行求和
 * @author kdyoung
 */

#include <stdio.h>
/**
 * @param  array 整型数组
 * @param  n     数组的长度
 * @return sum   数组各元素的和
 */
int arraySum (int array[], const int n) {
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ++ptr) {
        sum += *ptr;
    }

    return sum;
}

int main () {

    int arraySum (int array[], const int n);
    int values[10] = {3, 3, 5, -4, 58, 42, 76, -99, 18, 3};

    printf ("The sum of values is : %i.\n", arraySum (values, 10));

    return 0;
}
