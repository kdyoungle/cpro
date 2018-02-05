/*
 * 使用指针计算字符串中的字符数
 * @author kdyoung
 */
#include<stdio.h>

int stringLength (const char *string)
{
    const char *cptr = string;
    while (*cptr)
    {
        ++cptr;
    }
    return cptr - string;
}

int main()
{
    int stringLength (const char *string);

    printf ("%i\n ", stringLength ("stringLength test"));
    printf ("%i\n ", stringLength (""));
    printf ("%i\n ", stringLength ("complete"));

    return 0;
}
