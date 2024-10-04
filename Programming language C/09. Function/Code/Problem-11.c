//C Solution:
#include<stdio.h>

int isPrime( int n );

int main(){
    int n;
    scanf("%d",&n);
    if(isPrime(n)) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}

int isPrime( int n ){
    if( n < 2 ) return 0;
    else{
        for(int i = 2; i <= n/2; i++ ){
            if( n % i == 0 ) return 0;
        }
        return 1;
    }
}
