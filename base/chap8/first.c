#include<stdio.h>

int main(){

    struct date{
        int month;
        int day;
        int year;
    } ;
    
    struct date today;

    today.month = 1;
    today.day = 23;
    today.year = 2017;

    printf("Today's date is %i/%i/%.2i\n" , today.month, today.day, today.year);

    return 0;

}
