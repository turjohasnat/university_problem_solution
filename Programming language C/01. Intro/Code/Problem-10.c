//Task - Program that will declarea variable from each data type: longint, long longint, long double, short int. Then it will initialize them with values and print them.

//Sample output:
//The long int value:2147483647
//The long longint value: 9223372036854775807
//The long double value: 1.1E+4932
//The short int value: 32767

//The long int value: -2,147,483,648
//The long longint value: -9223372036854775808
//The long double value: 3.4E-4932
//The short int value: -32768

//C Solution: 
#include <stdio.h>

int main(){
    long int longInt;
    longInt = 2147483647;
    printf("The long int value:%ld\n",longInt);

    long long int longLongInt;
    longLongInt = 9223372036854775807;
    printf("The long long int value:%lld\n",longLongInt);

    long double longDouble;
    longDouble = 1.1E+4932L;
    printf("The long double value:%Lg\n",longDouble);

    short int shortInt;
    shortInt = 32767;
    printf("The short int value:%hd\n\n",shortInt);

    long int long_int;
    long_int = -2147483648;
    printf("The long int value:%ld\n",long_int);

    long long int long_long_int; 
    long_long_int = -9223372036854775808;
    printf("The long long int value:%lld\n",long_long_int);

    long double long_double;
    long_double = 3.4E-4932L;
    printf("The long double value:%Lg\n",long_double);

    short int short_int;
    short_int = -32768;
    printf("The short int value:%hd\n\n",short_int);

    return 0;
}
