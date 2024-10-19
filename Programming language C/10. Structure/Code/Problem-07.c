//C Solution:
#include<stdio.h>

struct complex{
    int real;
    int imaginary;
};

struct complex add( struct complex num1, struct complex num2 );
struct complex subtract( struct complex num1, struct complex num2);

int main(){
    struct complex num1, num2, sum1, sum2;
    scanf("%d %d", &num1.real, &num1.imaginary);
    scanf("%d %d", &num2.real, &num2.imaginary);

    sum1 = add( num1, num2 );
    sum2 = subtract( num1, num2 );

    printf("(%d + %di) + (%d + %di) = %d + %di\n", num1.real, num1.imaginary, num2.real, num2.imaginary, sum1.real, sum1.imaginary);
    printf("(%d + %di) - (%d + %di) = %d + %di\n", num1.real, num1.imaginary, num2.real, num2.imaginary, sum2.real, sum2.imaginary);

    return 0;
}

struct complex add( struct complex num1, struct complex num2 ){
    struct complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct complex subtract( struct complex num1, struct complex num2 ){
    struct complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}
