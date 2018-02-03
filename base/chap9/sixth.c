//读入数据行，读取使用getchar方法读入整行文本

#include <stdio.h>

int main(){

    int i;
    char line[12];
    void readLine(char buffer[]);

    for (i = 0; i < 3; ++i) {
        readLine(line);
        printf ("%s\n\n", line);

    }

    return 0;
}

// 此函数从终端读入文本行

void readLine (char buffer[]){
    char character;
    int i = 0;

    do {
        character = getchar();
        buffer[i] = character;
        ++i;
    } while (character != '\n');

    buffer[i - 1] = '\0';
}
