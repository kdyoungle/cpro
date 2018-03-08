/*
 * 枚举法，穷举法
 *  abcde
 *  ×   a
 *--------
 * eeeeee
 * 求解a, b, c, d, e
 * 10000 <= abcde <= 99999
 * @author kdyoung
 */

#include <stdio.h>

int main()
{
    int i, a, e, j = 0;
    int result[10];

    for(i = 10000; i < 99999; ++i)
    {
        a = i / 10000; // 最高位整数
        e = i % 10;  // 末位整数
        if ((i * a) == (e * 100000 + e * 10000 + e * 1000 + e * 100 + e * 10 + e))
        {
            result[j++] = i;
        }
    }

    printf("共找到%i个符合条件的结果，分别为：\n", j);

    for(int n = 0; n < j; ++n){
        printf("%i\n", result[n]);

    }

    return 0;
}



