//C Solution:
#include <stdio.h>
#include <math.h>

int main(){
    float X;
    printf("Enter your floating point number:");
    scanf("%f",&X);
    printf("A-%f\n",ceil(X));
    printf("B-%f\n",floor(X));
    printf("C-%.2f\n",fabs(X));
    return 0;
}
