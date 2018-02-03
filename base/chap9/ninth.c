// 此程序使用字典查找程序

#include <stdio.h>
#include <stdbool.h>

struct entry {
    char word [15];
    char defination [50];
};

bool equalStrings (const char s1[], const char s2[]) {
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }

    areEqual = s1[i] == '\0' && s2[i] == '\0';

    return areEqual;
}

//此函数在字典中查找一个单词
int lookup (const struct entry dictionary[],const char search[], const int entries) {
    int i;
    bool equalStrings (const char s1[], const char s2[]);

    for (i = 0; i < entries; ++i) {
        if (equalStrings(search, dictionary[i].word)) {
            return i;
        }
    }

    return -1;
}

int main () {
    const struct entry dictionary[100] = {
        {"aa", "aaaaaaaaaaaaaaaaaaa"},
        {"bb", "bbbbbbbbbbbbbbbbbb"},
        {"cc", "cccccccccccccccccc"},
        {"dd", "dddddddddddddddddddd"},
        {"ee", "eeeeeeeeeeeeeeeeee"}
    };

    char word[10];
    int entries = 5;
    int entry;
    int lookup (const struct entry dictionary[], const char search[], const int entries);

    printf ("Enter word:");
    scanf ("%14s", word);
    entry = lookup (dictionary, word, entries);

    if (entry != -1) {
        printf ("%s\n", dictionary[entry].defination);
    }else {
        printf ("Sorry, the word %s is not in my dictionary.\n", word);
    }
}
