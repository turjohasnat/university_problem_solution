//C Solution:
#include <stdio.h>
#include <math.h>

#define Pi 3.1416
int main(){
    float r;
    printf("Enter your radius value:");
    scanf("%f",&r);

    float area;
    area= 2*Pi*r;
    printf("Area:%.2f",area);
    return 0;
}
