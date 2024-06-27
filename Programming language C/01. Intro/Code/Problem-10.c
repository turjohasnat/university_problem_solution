//C Solution:
#include<stdio.h>

int main(){
    long int long_int;
    long long int long_long_int;
    long double long_double;
    short int short_int;

    long_int = 2147483647;
    long_long_int = 9223372036854775807;
    long_double = 1.1E+4932L;
    short_int = 32767;

    printf("The long int value: %ld\n", long_int);
    printf("The long long int value: %lld\n", long_long_int); 
    printf("The long double value: %Lg\n", long_double);
    printf("The short int value: %hd\n\n", short_int);

    long int longInt;
    long long int longLongInt;
    long double longDouble;
    short int shortInt;

    longInt = -2147483648;
    longLongInt = -9223372036854775808;
    longDouble = 3.4E-4932L;
    shortInt = -32768;

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt); 
    printf("The long double value: %Lg\n", longDouble);
    printf("The short int value: %hd\n", shortInt);
    return 0;
}