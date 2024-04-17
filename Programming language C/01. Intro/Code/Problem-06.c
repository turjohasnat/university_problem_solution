//Task - Program that will take your age in year(s)as input and print it.

//Sample input:
// 20, 21.

//Sample output:
// My age is: 20, My age is: 21.


//C Solution:
#include <stdio.h>

int main (){
    int myAge;
    printf("Enter your age:");
    scanf("%d",&myAge);
    printf("\nMy age is:%d",myAge);

    return 0;
}
