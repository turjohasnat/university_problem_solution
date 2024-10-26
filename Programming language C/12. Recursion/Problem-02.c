//C Solution:
#include<stdio.h>

int sumF( int n );

int main(){
    int n;
    printf("Input the last number of the range starting from 1: ");
    scanf("%d", &n);

    int sum = sumF(n);
    printf("The sum of numbers from 1 to 5 : %d\n", sum);
    return 0;
}

int sumF( int n ){
    if( n == 0 ){
        return;
    }
    else{
        return n + sumF( n - 1 );
    }
}
