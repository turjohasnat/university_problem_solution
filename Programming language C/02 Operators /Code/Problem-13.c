//Task - Program that will evaluate the equation 
// 2 cos^2  x-√3  sinx+ sin x/2
// ; where 1<= x <=180 [No checking needed]

//Sample input (x):
// X = 30, 120

//Sample output:
// 1.810066
// 0.778151

//C Solution:
#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Enter your value:");
    scanf("%d",&x);
    float y;
    y = 2*pow(cos(x),2)-sqrt(3)*sin(x)+sin(x/2);
    printf("Result:%f\n",y);
    return 0;
}
