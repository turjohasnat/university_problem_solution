//Task - Program that will take two numbers (a, b) as inputs and compute the value of the equation – (Without using math.h)
//              X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)

//Sample input (a, b):
//  a = 5, b = 10.5

//Sample output:
// X = 2.315475

//C Solution:
#include <stdio.h>

int main(){
    float a,b;
    printf("Enter your first number:");
    scanf("%f",&a);
    printf("Enter your last number:");
    scanf("%f",&b);

    float X;
    X=(3.31*(a*a)+2.01*(b*b*b))/(7.15*(b*b)+2.01*(a*a*a));
    printf("X=%f",X);
    
    return 0;
}
