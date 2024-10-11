//C Solution:
#include<stdio.h>

int IsPrime( int n );
int GenNthPrime( int n );

int main(){
    int n;
    scanf("%d",&n);
    int pNum = GenNthPrime(n);
    printf("%dth Prime: %d", n, pNum);
    return 0;
}

int IsPrime( int n ){
    if( n < 2 ) return 0;
    for( int i = 2; i < n; i++ ){
        if( n % i == 0 ) return 0;
    }
    return 1;
}

int GenNthPrime( int n ){
    int count = 0;
    int num = 1;
    while( count < n ){
        num++;
        if(IsPrime(num)){
            count++;
        }
    }
    return num;
}
