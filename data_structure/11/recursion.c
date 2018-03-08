/*
 * 递归算法
 * 求阶乘
 * @author kdyoung
 *
 */

#include <stdio.h>

int main()
{
    int i, result;
    int fact (int n);

    printf ("请输入要求解的数？：");
    scanf ("%i", &i);

    result = fact(i);
    printf ("求得的结果为:%i.\n", result);

    return 0;
}

/*
 * 递归调用本函数，求阶乘
 */
int fact (int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact (n - 1);
    }

}
