/* 此程序计算一个字符串中单词个数
 * @author yangle
 * @date 
 */

#include<stdio.h>
#include<stdbool.h>

// 此函数判断一个字符是否未字母
bool alphabetic (const char c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    } else {
        return false;
    }
}

/* 此函数计算一个字符串中有多少个单词个数 */

int countWords (const char string[]) {
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic (const char c);

    for (i = 0; string[i] != '\0'; ++i) {
        if (alphabetic(string[i])) {
            if (lookingForWord) {
                ++wordCount;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }
    return wordCount;
}

int main() {

    const char text1[] = "Well here goes.";
    const char text2[] = "And here we go... again";
    int countWords (const char string[]);

    printf ("%s - words = %i\n", text1, countWords (text1));
    printf ("%s - words = %i\n", text2, countWords (text2));
    return 0;
}
