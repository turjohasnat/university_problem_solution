//C Solution:
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    x *= y;
    x /= y;

    printf("Multiplication:%d\n",x);
    printf("Division:%d\n",x);
    
    return 0;
}