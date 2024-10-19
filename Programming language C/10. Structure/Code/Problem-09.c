//C Solution:
#include <stdio.h>
#include <math.h>

struct complex {
    float real;
    float imaginary;
};

struct complex divide(struct complex num1, struct complex num2);

int main() {
    struct complex num1, num2, div;
    scanf("%f %f", &num1.real, &num1.imaginary);
    scanf("%f %f", &num2.real, &num2.imaginary);

    div = divide(num1, num2);
    printf("( %.2f + %.2fi ) / ( %.2f + %.2fi ) = %.2f + %.2fi\n", num1.real, num1.imaginary, num2.real, num2.imaginary, div.real, div.imaginary);

    return 0;
}

struct complex divide(struct complex num1, struct complex num2) {
    struct complex result;
    float denominator = pow(num2.real, 2) + pow(num2.imaginary, 2);

    result.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / denominator;
    result.imaginary = (num1.imaginary * num2.real - num1.real * num2.imaginary) / denominator;

    return result;
}
