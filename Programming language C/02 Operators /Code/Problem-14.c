//C Solution:
#include <stdio.h>
#include <math.h>

int main(){
    float x;
    scanf("%f",&x);

    printf("A-%.0f, ",ceil(x));
    printf("B-%.0f, ",floor(x));
    printf("C-%.2f\n",fabs(x));
    return 0;
}