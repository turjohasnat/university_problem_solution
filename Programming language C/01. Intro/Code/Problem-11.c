//C Solution:
#include <stdio.h>

int main(){
    unsigned int intValue, int_value;
    unsigned long int longInt, long_int; 
    unsigned long long int longLongInt, long_long_int;
    unsigned short int shortInt, short_int;
    
    intValue=4294967295;
    longInt=4294967295;
    longLongInt=18446744073709551615;
    shortInt=65535;

    int_value=0;
    long_int=0;
    long_long_int=0;
    short_int=0;

    printf("The unsigned int value:%u\n",intValue);
    printf("The unsigned long int value:%lu\n",longInt);
    printf("The unsigned long long int value:%llu\n",longLongInt);
    printf("The unsigned short int value:%hu\n\n",shortInt);

    printf("The unsigned int value:%u\n",int_value);
    printf("The unsigned long int value:%lu\n",long_int);
    printf("The unsigned long long int value:%llu\n",long_long_int);
    printf("The unsigned short int value:%hu\n\n",short_int);

    return 0;
}
