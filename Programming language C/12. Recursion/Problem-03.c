//C Solution:
#include<stdio.h>

int fib( int a );

int main(){
    int n;
    printf("Input number of terms for the Series (< 20): ");
    scanf("%d", &n);

    printf("The Series are : \n");
    for( int i = 0; i <n; i++ ){
        printf("%d ", (fib(i)));
    }
    return 0;
}

int fib( int a ){
    if( a == 0 ){
        return 0;
    }
    else if( a == 1 ){
        return 1;
    }
    else{
        return fib( a - 1 ) + fib( a - 2 );
    }
}
