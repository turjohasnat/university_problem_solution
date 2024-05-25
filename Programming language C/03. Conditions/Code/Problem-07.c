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
