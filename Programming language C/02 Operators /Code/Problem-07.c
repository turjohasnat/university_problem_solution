//C Solution:
#include <stdio.h>

int main(){
    int intNum, int_num;
    printf("Enter your integer number:");
    scanf("%d",&intNum);
    float floatNum, float_num;
    printf("Enter your floating number:");
    scanf("%f",&float_num);

    printf("Assignment:%d assigned to an int produces %f\n",intNum, floatNum=intNum);
    printf("Assignment:%f assigned to a float produces  %d\n",float_num, int_num=float_num);

    float cast_to_float = (float) intNum; 
    int cast_to_int  = (int) floatNum;
    printf("Type Casting: (float) %d produces %f\n", intNum, cast_to_float);
    printf("Type Casting: (float) %f produces %d\n", float_num, cast_to_int );

    return 0;
}
