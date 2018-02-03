// 指向字符的指针

#include <stdio.h>

int main () {

    char c = 'Q';
    char *char_pointer = &c;

    printf ("%c\t%c\n", c, *char_pointer);

    c = '/';
    printf ("%c\t%c\n", c, *char_pointer);
   
    *char_pointer = '(';
    printf ("%c\t%c\n", c, *char_pointer);

    return 0;
}
