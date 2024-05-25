//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    if (num == 0){
        printf("Zero is not a valid input");
    }
    else if (num < 0){
        printf("Negative input is not valid");
    }
    else{
            if ((num & (num-1)) == 0 ){
            printf ("Yes");
            }
            else{
            printf("No");
            }
    }
    return 0;
}
