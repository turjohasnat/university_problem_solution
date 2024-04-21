//Task - Program that will calculate the circumference of a circle having radius r. 
//        Area, A = 2 * Pi * r

//Sample input (r)
// 5, 10.5

//Sample output
//Area:  31.42, Area:  65.94

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
