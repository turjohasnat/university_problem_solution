//C Solution:
#include<stdio.h>

int main(){
    int integer_num;
    scanf("%d", &integer_num);

    float float_num;
    scanf("%f", &float_num);

    char character;
    scanf(" %c", &character);
    
    printf("The integer value: %d\n", integer_num);
    printf("The floating point value: %f\n", float_num);
    printf("The character value: %c\n", character);

    return 0;
}