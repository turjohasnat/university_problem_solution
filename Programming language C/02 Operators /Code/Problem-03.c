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
