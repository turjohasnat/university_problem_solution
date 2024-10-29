//C Solution:
#include<stdio.h>

struct Length{
    int meter;
    int centimeter;
};

int main(){
    struct Length length_1, length_2, sum;
    scanf("%d %d", &length_1.meter, &length_1.centimeter);
    scanf("%d %d", &length_2.meter, &length_2.centimeter);

    sum.meter = length_1.meter + length_2.meter;
    sum.centimeter = length_1.centimeter + length_2.centimeter;

    if (sum.centimeter >= 100){
        sum.meter += sum.centimeter / 100;
        sum.centimeter %= 100;
    }

    printf("The sum is %d meter %d centimeter", sum.meter, sum.centimeter);
    return 0;
}
