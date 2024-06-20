//C Solution:
#include <stdio.h>

int main(){
    int X, Y;
    printf("Enter your X value:");
    scanf("%d",&X);
    printf("Enter your Y value:");
    scanf("%d",&Y);

    X += Y;
    Y -= X;
    printf("Incremented Value:%d\n",X);
    printf("Decremented Value:%d\n",Y);

    return 0;
}
