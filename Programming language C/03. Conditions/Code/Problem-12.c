//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,r1,r2;
    scanf("%f %f %f",&a, &b, &c);

    r1 = ( -b + sqrt( pow(b,2) - 4*a*c)) / (2*a); 
    r2 = ( -b - sqrt( pow(b,2) - 4*a*c)) / (2*a); 

    if (r1 <= 0 || r1 >= 0){
        printf("%.2f\n", r1);
    }
    else{
        printf("Imaginary\n");
    }
    if (r2 <= 0 || r2 >= 0){
        printf("%.2f\n", r2);
    }
    else{
        printf("Imaginary\n");
    }
    
    return 0;
}