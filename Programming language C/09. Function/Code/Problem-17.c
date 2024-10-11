//C Solution:
#include<stdio.h>

int findGCD( int a, int b );
int findLCD ( int a, int b );

int main(){
    int a, b;
    scanf("%d %d", &a, &b );

    int gcd = findGCD( a, b );
    int lcd = findLCD( a, b );

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcd);
    return 0;
}

int findGCD( int a, int b ){
    while( b != 0 ){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCD( int a, int b ){
    int c = ( a * b ) / findGCD( a, b );
    return c;
}
