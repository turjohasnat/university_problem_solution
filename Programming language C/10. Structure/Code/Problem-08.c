//C Solution:
#include<stdio.h>

struct complex {
    int real;
    int imaginary;
};

struct complex multiply(struct complex num1, struct complex num2);

int main() {
    struct complex num1, num2, mul;
    scanf("%d %d", &num1.real, &num1.imaginary);
    scanf("%d %d", &num2.real, &num2.imaginary);

    mul = multiply(num1, num2);
    printf("(%d + %di) * (%d + %di) = %d + %di\n", num1.real, num1.imaginary, num2.real, num2.imaginary, mul.real, mul.imaginary);

    return 0;
}

struct complex multiply(struct complex num1, struct complex num2) {
    struct complex result;
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return result;
}
