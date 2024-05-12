//Task - Program that will read from the console a random positive nonzero number and determine if it is a power of 2.

//Sample input:
// 1
// 512
// 1022

//Sample output:
// Yes
// Yes
// No

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
