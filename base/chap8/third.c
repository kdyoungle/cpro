#include<stdio.h>
#include<stdbool.h>
struct date {

    int month;
    int day;
    int year;
};

int main(){
    
    struct date today, tomorrow;

    int numberOfDays(struct date d);

    printf("Enter today's date (mm dd yyyy);");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if(today.day != numberOfDays(today)){
       tomorrow.month = today.month;
       tomorrow.day = today.day + 1;
       tomorrow.year = today.year;
    }else if (today.month == 12 ){//年末
        tomorrow.month = 1;
        tomorrow.day = 1;
        tomorrow.year = today.year + 1;
    }else{
        tomorrow.month = today.month + 1;
        tomorrow.day = 1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is : %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);
    

    return 0;
}

//此函数用于计算当前月总天数
int numberOfDays(struct date d){

    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(isLeapYear(d) == true && d.month == 2){
        days = 29;
    }else{
        days = daysPerMonth[d.month - 1];
    }

    return days;

}
//此函数用于判断是否为闰年
bool isLeapYear(struct date d){

    bool leapYearFlag;

    if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0){
        leapYearFlag = true;//是闰年
    }else{
        leapYearFlag = false;//不是闰年
    }

    return leapYearFlag;
}
