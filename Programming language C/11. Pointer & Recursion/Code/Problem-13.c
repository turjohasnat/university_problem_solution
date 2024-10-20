//C Solution:
#include <stdio.h>

int digitCount( int n );

int main(){
    int n;
    scanf("%d", &n);

    int digit = digitCount( n );
    printf("%d", digit);
    return 0;
}

int digitCount( int n ){
    if( n == 0 ) return 0;
    else return 1 + digitCount( n / 10 );
}
