//Task -Program that will decide whether a number is even or odd.

//Sample input:
// 50
// -77
// 0

//Sample output:
// Even
// Odd
// Even

//C Solution:
#include <stdio.h>

int main(){
    int number;
    printf("Enter your number:");
    scanf("%d",&number);

    if ((number%2)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    
    return 0;
}
