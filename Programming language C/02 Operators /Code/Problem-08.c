//C Solution:
#include <stdio.h>

int main(){
    int number1, number2;
    scanf("%d %d",&number1, &number2);
    
    if (number1>number2){
        printf("Max:%d",number1);
    }
    else{
        printf("Max:%d",number2);
    }

    return 0;
}