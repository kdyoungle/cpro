/* 此函数计算一个字符串的字符个数，及字符串长度
 * 
 * 实现思路：
 * 在每个字符串的最后放一个特殊的字符，这样，当函数遇到这个特殊字符时，就可以
 * 自行判断出已经到达了字符串的末尾；
 * 在c语言中，用于表示字符串结尾的特殊字符称为空字符，记做 “\0”
 */

#include<stdio.h>

int stringLength(const char string[]){
    int count = 0;
    while (string[count] != '\0') {
        ++count;
    }

    return count;
}

int main(){
    int stringLength(const char string[]);
    const char word1[] = {'a','s','t','e','r','\0'};
    const char word2[] = {'a','t','\0'};
    const char word3[] = {'a','w','e','\0'};

    printf("word1 length = %i,\n"
           "word2 length = %i,\n"
           "word3 length = %i.\n",
            stringLength(word1),
            stringLength(word2),
            stringLength(word3));
//    printf("%i  %i  %i\n",
//            stringLength(word1), stringLength(word2),
//            stringLength(word3));
    return 0;
}

