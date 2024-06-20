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
