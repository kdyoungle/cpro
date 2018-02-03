// 词典查找 （二分查找法）

#include <stdio.h>

struct entry {
    char word[15];
    char defination[50];
};

//此函数比较两个字符串

int compareStrings (const char s1[], const char s2[]) {
    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }

    if (s1[i] < s2[i]) {
        answer = -1;  //s1 < s2
    } else if (s1[i] == s2[i]) {
        answer = 0;  //s1 = s2
    } else {
        answer = 1;  //s1 > s2
    }

    return answer;
}

//此函数在字典中查找一个单词

int lookup (const struct entry dictionary[], const char search[], const int entries) {
    int low = 0;
    int high = entries -1;
    int mid, result;
    int compareStrings (const char s1[], const char s2[]);

    while (low <= high) {
        mid = (low + high) / 2;
        result = compareStrings (dictionary[mid].word, search);

        if (result == -1) {
            low = mid + 1;
        }else if (result == 1) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1; // 没有找到
}

int main () {
    const struct entry dictionary [100] = {
        {"aaa", "aaaaaaaaaaaaaaaaaaaa"},
        {"ads", "asdasdasdasd"},
        {"agd", "agggggddddd"},
        {"bbb", "bbbbbbbbbbbbbb"},
        {"bss", "sssssssssssssssssssss"},
        {"ccc", "cccccccccccccccccccccc"},
        {"ddd", "ddddddddddddddddddddddd"},
        {"eee", "eeeeeeeeeeeeeeeeeeeeeee"},
        {"erf", "errrrrrrrrrrffffffffff"},
        {"erg", "dewedewdew"},
        {"err", "errrrrerrrrerrr"},
        {"fff", "ffffffffffffffff"}
    };

    int entries = 12;
    char word[15];
    int entry;
    int lookup (const struct entry dictionary[], const char search[], const int entries);

    printf ("Enter word:");
    scanf ("%14s", word);

    entry = lookup (dictionary, word, entries);

    if (entry != -1) {
        printf ("%s\n",dictionary[entry].defination);
    } else {
        printf ("Sorry, the word %s is not in my dictionary. \n", word);
    }

    return 0;
}
