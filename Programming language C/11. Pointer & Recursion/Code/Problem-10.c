//C Solution:
#include <stdio.h>

int sumRecursion( int n );

int main(){
    int n;
    scanf("%d", &n);

    int sum = sumRecursion( n );
    printf("%d\n", sum);
    return 0;
}

int sumRecursion( int n ){
    if( n == 0 ){
        return 0;
    }
    else{
        return n + sumRecursion( n - 1 );
    }
}
