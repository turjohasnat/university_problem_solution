//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    if ((num & (num-1)) == 0 ){
        printf ("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
