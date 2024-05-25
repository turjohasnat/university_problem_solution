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
