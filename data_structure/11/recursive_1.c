/*
 * 斐波那契数列
 * 递推算法中，顺推方法的应用
 × 知道初始值，推出后续的值
 * @author kdyoung
 */

#include <stdio.h>
#define NUM  13

int main() 
{

    int sum[NUM] = {1, 1};

    for (int i = 2; i < NUM; ++i)
    {
        sum[i] = sum[i - 1] + sum[i - 2];
        printf ("第%i个月的兔子总对数为%i.\n", i, sum[i]);
    }

    return 0;
}
