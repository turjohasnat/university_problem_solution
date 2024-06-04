//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int num, root;
    printf("Enter your number:");
    scanf("%d",&num);

    root = sqrt(num);
    if (num == 0){
        printf("Zero is not a valid input");
    }
    else if (num < 0){
        printf("Negative input is not valid");
    }
    else{
            if ( pow( root , 2 ) == num ){
            printf ("Yes");
            }
            else{
            printf("No");
            }
    }
    return 0;
}
