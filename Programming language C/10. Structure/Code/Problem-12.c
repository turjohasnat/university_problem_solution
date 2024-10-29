//C Solution:
#include<stdio.h>

struct Times{
    int hour;
    int min;
    int sec;
};

int main(){
    struct Times time;
    float total_hour, total_min;
    int total_sec;
    scanf("%d %d %d", &time.hour, &time.min, &time.sec);

    total_hour = time.hour + ( time.min / 60.00 ) + ( time.sec / 3600.00 );
    total_min = ( time.hour * 60 ) + time.min + ( time.sec / 60.00 );
    total_sec = ( time.hour * 3600 ) + ( time.min * 60 ) + time.sec;

    printf("Time interval in hour: %.2f\n", total_hour);
    printf("Time interval in minute: %.2f\n", total_min);
    printf("Time interval in second: %d\n", total_sec);

    return 0;
}
