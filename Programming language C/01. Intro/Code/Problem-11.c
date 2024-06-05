//C Solution:
#include<stdio.h>

int main(){
    unsigned int val_1;
    unsigned long int val_2;
    unsigned long long int val_3;
    unsigned short int val_4;

    val_1 = 4294967295;
    val_2 = 4294967295;
    val_3 = 18446744073709551615;
    val_4 = 65535;

    printf("The unsigned int value: %u\n", val_1);
    printf("The unsigned long int value: %lu\n", val_2);
    printf("The unsigned long long int value: %llu\n", val_3);
    printf("The unsigned short int value: %hu\n\n", val_4);

    
    unsigned int val_01;
    unsigned long int val_02;
    unsigned long long int val_03;
    unsigned short int val_04;

    val_01 = 0;
    val_02 = 0;
    val_03 = 0;
    val_04 = 0;

    printf("The unsigned int value: %u\n", val_01);
    printf("The unsigned long int value: %lu\n", val_02);
    printf("The unsigned long long int value: %llu\n", val_03);
    printf("The unsigned short int value: %hu\n", val_04);

    return 0;
}