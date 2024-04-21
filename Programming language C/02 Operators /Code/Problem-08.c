//Task - Program that will take two numbers as inputs and print the maximum value. (Using conditional operator - ?)

//Sample input (x, y):
// 20,   100

//Sample output:
// Max: 100

//C Solution:
#include <stdio.h>

int main(){
    int number1, number2;
    printf("Enter your first number:");
    scanf("%d",&number1);
    printf("Enter your last number:");
    scanf("%d",&number2);
    if (number1>number2){
        printf("Maximum value:%d",number1);
    }
    else{
        printf("Maximum value:%d",number2);
    }

    return 0;
}
