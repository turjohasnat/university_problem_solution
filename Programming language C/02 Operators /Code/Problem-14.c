//Task - Program that will take a floating point number X as input and evaluate A,B,C where-
// A = Value when X is rounded up to the nearest integer
// B = Value when X is rounded down to the nearest integer
// C = Absolute value of X

//Sample input(X):
// X = 10.6

//Sample output:
//A = 11, B = 10, C = 10.6

//C Solution:
#include <stdio.h>
#include <math.h>

int main(){
    float X;
    printf("Enter your floating point number:");
    scanf("%f",&X);
    printf("A-%f\n",ceil(X));
    printf("B-%f\n",floor(X));
    printf("C-%.2f\n",fabs(X));
    return 0;
}
