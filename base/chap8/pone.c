
/*此程序计算两个日期相差的天数
 *计算公式：根据给出的年月日计算N值，然后计算N值的差值
 * 1. 计算N值 ： N = 1461 * f (year, month) / 4 + 153 * g (month) / 5 + day
 * 此公式适用于1900年3月1日之后的任意日期（对于1800年3月1日到1900年2月28日之间的日期
 * 必须向N 加1；对于1700年3月1日到1800年2月28日之间的日期，必须向N加2）
 *  
 */
#include<stdio.h>

struct date {

    int year;
    int month;
    int day;

};

int f (int year, int month){

     if(month <= 2){
        year = year - 1;
     }

     return year;

}

int g (int month){

    if(month <= 2){
        month += 13;
    } else {
        month += 1;
    }

    return month;
}

int getN (struct date d){
   
    int n = 1461 * f (d.year, d.month) / 4 + 153 * g (d.month) / 5 + d.day;

    return n;
}

int main(){

    struct date firstDate, secondDate;

    printf("Enter first date (yyyy mm dd) :");
    scanf("%i%i%i", &firstDate.year, &firstDate.month, &firstDate.day);
   
    printf("Enter second date (yyyy mm dd) :");
    scanf("%i%i%i", &secondDate.year, &secondDate.month, &secondDate.day);

    int firstN = getN (firstDate);
    int secondN = getN (secondDate);

    int diff = secondN - firstN;

    printf("给出的两个日期 %i-%i-%i ， %i-%i-%i 相差的天数是 : %i 天！ \n", firstDate.year,
          firstDate.month, firstDate.day, secondDate.year, secondDate.month, secondDate.day, diff);

    return 0;
}
