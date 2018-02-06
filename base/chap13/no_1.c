/*
 * 使用枚举数据类型
 * 打印一个月中的天数
 *
 * @author kdyoung
 */

#include <stdio.h>

int main () 
{
    enum month 
    {
        January = 1, February, March, April, May, June, July, 
        August, September, October, November, December
    };
    enum month aMonth;
    int days;

    printf ("Enter month number:");
    scanf ("%i", &aMonth);

    switch (aMonth)
    {
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            days = 31;
            break;
        case April:
        case June:
        case September:
        case November:
            days = 30;
            break;
        case February:
            days = 28;
            break;
        default:
            printf ("bad month number\n");
            break;
    }

    if (days != 0) 
    {
        printf ("Number of days is %i.\n", days);
    }

    if (aMonth == February)
    {
        printf ("...or 29 if it's a leap year.\n");
    }

    return 0;
}

