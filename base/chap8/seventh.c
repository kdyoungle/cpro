//此程序演示结构体中包含数组

#include<stdio.h>

int main(){

    struct month{
    
        int numberOfDays;//每个月的天数
        char name[3];//该月的简称

    };

    const struct month months[12] = {
    
        {31, {'J', 'a', 'n'}},
        {28, {'F', 'e', 'b'}},
        {31, {'M', 'a', 'r'}},
        {30, {'A', 'p', 'r'}},
        {31, {'M', 'a', 'y'}},
        {30, {'J', 'u', 'n'}},
        {31, {'J', 'u', 'l'}},
        {31, {'A', 'u', 'g'}},
        {30, {'S', 'e', 'p'}},
        {31, {'O', 'c', 't'}},
        {30, {'N', 'o', 'v'}},
        {31, {'D', 'e', 'c'}},
    };

    printf("Month NumberOfDays\n");
    printf("----- -------------\n");

    struct month d;
    for (int i = 0; i < 12; ++i){
        d = months[i]; 
        printf(" %c%c%c \t %i \n ", d.name[0], d.name[1], d.name[2], d.numberOfDays );
    }

    return 0;
}
