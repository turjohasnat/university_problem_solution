//Task - Program that will decide whether a number is positive or not.

//Sample input:
// 100
// -11.11
// 0

//Sample output:
// Positive
// Negative
// Positive

//C Solution:
#include <stdio.h>

int main(){
    float num;
    printf("Enter your number:");
    scanf("%f",&num);

    if(num>-1){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}
