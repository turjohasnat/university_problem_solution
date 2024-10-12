#include<stdio.h>
#include<math.h>

struct complex{
    float real;
    float imaginary;
};

int main(){
    struct complex num;
    scanf("%f %f", &num.real, &num.imaginary);

    float modulus = sqrt(pow(num.real, 2) + pow(num.imaginary, 2));
    float argument = atan2(num.imaginary, num.real);

    printf("Modulus = %.4f\n", modulus);
    printf("Argument = %.4f\n", argument);

    return 0;
}
