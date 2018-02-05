/*
 * 使用#define语句
 * @author kdyoung
 */

#include <stdio.h>

#define YES  1
#define NO   0

// 此函数判断一个整数是否为偶数

int isEven (int number)
{
    int answer;

    if (number % 2 == 0) 
    {
        answer = YES;
    }
    else
    {
        answer = NO;
    }

    return answer;
}

int main ()
{
    int isEven (int number);

    if (isEven (17) == YES)
    {
        printf ("yes\n");
    }
    else
    {
        printf ("no\n");
    }
    if (isEven (20) == YES)
    {
        printf ("yes\n");
    }
    else
    {
        printf ("no\n");
    }

    return 0;
}
