//Task - Program that will increment and decrement a number X by 1 inside the printf function. (Use ++ and -- operators)

//Sample input(x):
// x = 5

//Sample output
// X++  :    5
// ++X  :    7
// X--  :    7
// --X  :    5

//C Solution:
#include <stdio.h>

int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    printf("X++:%d\n",x++);
    printf("++X:%d\n",++x);
    printf("X--:%d\n",x--);
    printf("--X:%d\n",--x);
    
    return 0;
}
