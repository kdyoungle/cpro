/*
 * copyString() 方法的指针表示版本
 * @author kdyoung
 */

#include <stdio.h>

void copyString (char *to, char *from) {
    for (; *from != '\0'; ++from, ++to) {
        *to = *from;
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
