#include <stdio.h>
int main () {
    
    void contact (char result[], const char str1[], const char str2[]);

    const char str1[] = {"Test "};
    const char str2[] = {"works."};

    char result[20];

    contact (result, str1, str2);

    printf ("%s \n", result);
}

void contact (char result[], const char str1[], const char str2[]) {

    int i, j;

    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }
     // ! 用一个空字符终止连接后的字符串

    result[i + j] = '\0'; 
}
