//次程序演示结构体的数组

#include<stdio.h>

struct time {

    int hour;
    int minute;
    int second;
};

int main(){

    struct time timeUpdate(struct time now) ;

    struct time testTimes[5] = {
        {11, 59, 59},
        {12, 0, 0},
        {1, 29, 59},
        {23, 59, 59},
        {19, 12, 27}
    };

    for(int i = 0; i < 5; ++i){
        printf("Time is %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minute, testTimes[i].second);

        testTimes[i] = timeUpdate (testTimes[i]);
        
        printf("...one second later it's  %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minute, testTimes[i].second);
    }
    return 0;
}

struct time timeUpdate(struct time d){
   
    ++d.second;

    if(d.second == 60){
        d.second = 0;
        ++ d.minute;
        
        if(d.minute == 60){
            //下一个小时
            d.minute = 0;
            ++d.hour;

            if(d.hour == 24){
                d.hour = 0;
            }
        }
    }

    return d;
}

