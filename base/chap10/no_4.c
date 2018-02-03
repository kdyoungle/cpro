// 演示结构体指针

#include <stdio.h>

int main () {

    struct date {
        int month;
        int year;
        int day;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->year = 2017;
    datePtr->day = 25;

    printf ("Today's date is %i/%i/%i.\n", today.month, today.day, today.year);

    return 0;
}
