//Task - Program that will take two numbers X &Y as inputs and decide whetherX is greater than/less than/equal to Y.

//Sample input (X,Y):
// 5   -10
// 5    10
// 5     5

//Sample output:
// 5 is greater than -10
// 5 is less than 10
// 5 is equal to 5

//C Solution:
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter your first number:");
    scanf("%d",&x);
    printf("Enter your last number:");
    scanf("%d",&y);

    if (x<y){
        printf("%d is greater than %d", x, y);
    }
    else if(x>y){
        printf("%d is less than %d", x, y);
    }
    else{
        printf("%d is equal to %d", x, y);
    }
    
    return 0;
}
