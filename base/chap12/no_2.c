/*
 * 给定圆的半径，计算圆的面积和周长和球的体积
 * 使用#define语句
 * @author kdyoung
 */

#include <stdio.h>

#define PI  3.141592654

double area (double r)
{
    return PI * r * r;
}

double circumference (double r)
{
    return 2 * PI * r;
}

double volumn (double r)
{
    return 4.0 / 3.0 * PI * r * r * r;
}

int main()
{
    double area (double r);
    double circumference (double r);
    double volumn (double r);

    printf ("redius = 1: %.4f   %.4f  %.4f\n",
            area (1.0), circumference(1.0), volumn(1.0));
    printf ("redius = 4.98 : %.4f   %.4f  %.4f\n",
            area (4.98), circumference(4.98), volumn(4.98));

    return 0;
}
