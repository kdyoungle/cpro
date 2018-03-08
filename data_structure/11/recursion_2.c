/*
 * 递归算法
 * 数制转换:将任意一个十进制数转换为二进制数
 * @author kdyoung
 */

#include <stdio.h>

int main ()
{
    return 0;
}

/**/
int fact (int n)
{
int result[65];//整型数组，存储每次运算的结果

    if (n == 0 )
    {
        return 0;
    }
    else 
    {
        return fact (n / 2);
    }
    
}
