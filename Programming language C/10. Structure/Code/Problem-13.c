//C Solution:
#include<stdio.h>

struct Times{
    int hour;
    int min;
    int sec;
};

int main(){
    struct Times time_1, time_2, difference;
    scanf("%d %d %d", &time_1.hour, &time_1.min, &time_1.sec);
    scanf("%d %d %d", &time_2.hour, &time_2.min, &time_2.sec);

    if( time_1.sec < time_2.sec ){
        time_1.sec += 60;
        time_1.min -= 1;
    }
    difference.sec = time_1.sec - time_2.sec;

    if( time_1.min < time_2.min ){
        time_1.min += 60;
        time_1.hour -= 1;
    }
    difference.min = time_1.min - time_2.min;

    difference.hour = time_1.hour - time_2.hour;
    printf("%d %d %d\n", difference.hour, difference.min, difference.sec);

    return 0;
}
