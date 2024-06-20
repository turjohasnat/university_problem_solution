//C Solution:
#include <stdio.h>

int main(){
    int X, Y,x,y;
    printf("Enter your X value:");
    scanf("%d",&X);
    printf("Enter your Y value:");
    scanf("%d",&Y);
    x=X*Y;
    y=X/Y;
    printf("Multiplication:%d\n",x);
    printf("Division:%d\n",y);
    return 0;
}
