/*
 * copyString() 方法的指针表示版本
 * 增加了前后递增与递减的区别
 * @author kdyoung
 */

#include <stdio.h>

void copyString (char *to, char *from) {
    while (*from) {
       *to++ = *from++;
    }
    *to = '\0';
}

int main () {

    void copyString (char *to, char *from);
    char string1[] = "Hello, tiantian";
    char string2[50];

    copyString(string2, string1);
    printf ("%s\n",string2);

    copyString (string2, "strdddddd");
    printf ("%s\n",string2);

    return 0;
}
