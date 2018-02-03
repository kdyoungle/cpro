//此函数连接两个字符串

#include<stdio.h>

void contact (char result[], const char str1[], int n1, const char str2[], int n2){
   // int i, j;

    //将str1复制到result 中

    for (int i = 0; i < n1; ++i) {
        result[i] = str1[i];
    }

    //将str2复制到result中

    for (int j = 0; j < n2; ++j) {
        result[n1 + j] = str2[j];
    }
}

int main(){
    //函数的原型声明
    void contact (char result[], const char str1[], int n1, const char str2[], int n2);

    const char s1[5] = {'T', 'e' ,'s', 't',' '};

    const char s2[6] = {'w', 'o', 'r', 'k','s', '.'};

    char s3[13];

    contact (s3, s1, 5, s2, 6);

    for (int i = 0; i < 13; ++i) {
        printf("%c", s3[i]);
    }

    printf("\n");

    return 0;
}
