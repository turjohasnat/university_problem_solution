//C Solution:
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    x += y;
    x -= y;
    printf("Incremented Value:%d\n",x);
    printf("Decremented Value:%d\n",y);

    return 0;
}