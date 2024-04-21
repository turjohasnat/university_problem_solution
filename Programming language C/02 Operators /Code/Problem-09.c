//Task - Program that will evaluate the following equations -  
// X = a – b / 3 + c * 2 – 1
// Y = a – ( b / ( 3 + c ) * 2) - 1 
// Z = a – ( ( b / 3) + c * 2) - 1

//Sample input (a, b, c):
// a = 9, b = 12, c = 3

//Sample output
// X = 10
// Y = 4
// Z = -1

//C Solution:
#include <stdio.h>

int main(){
    int a,b,c;
    float X,Y,Z;

    printf("Enter your a value:");
    scanf("%d",&a);
    printf("Enter your b value:");
    scanf("%d",&b);
    printf("Enter your c value:");
    scanf("%d",&c);

    X=a-b/3+c*2-1;
    Y=a-(b/(3+c)*2)-1;
    Z=a-((b/3)+c*2)-1;
    
    printf("X:%.2f\n",X);
    printf("Y:%.2f\n",Y);
    printf("Z:%.2f\n",Z);

    return 0;
}
