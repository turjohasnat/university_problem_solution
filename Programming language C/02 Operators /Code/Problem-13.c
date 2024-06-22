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
