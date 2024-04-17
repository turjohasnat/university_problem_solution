//Task - Program that will definea constant using “DEFINE” and print the value.

//Sample output:
//The value of HEIGHT: 200
//The value of PI: 3.14

//C Solution:
#include <stdio.h>

#define HEIGHT 200
#define PI 3.14

int main(){
    printf("The value of HEIGHT:%d\n",HEIGHT);
    printf("The value of PI:%.2f",PI);
    return 0;
}
