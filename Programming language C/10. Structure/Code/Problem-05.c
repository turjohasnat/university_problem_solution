//C Solution:
#include<stdio.h>

struct complex{
    float real;
    float imaginary;
};

int main(){
    struct complex num;
    scanf("%f %f", &num.real, &num.imaginary );

    if( num.imaginary >= 0 ){
        printf("%.2f+%.2fi\n", num.real, num.imaginary);
    }
    else{
        printf("%.2f-%.2fi\n", num.real, -num.imaginary);
    }

    return 0;
}
