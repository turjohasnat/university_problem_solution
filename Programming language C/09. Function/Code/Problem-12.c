//C Solution:
#include<stdio.h>

int isPrime(int n);
void GeneratePrime(int n);

int main(){
    int n;
    scanf("%d", &n);
    GeneratePrime(n);
    return 0;
}

int isPrime(int n){
    if( n < 2 ) return 0;
    else{
        for( int i = 2; i <= n/2; i++ ){
            if( n % i == 0 ) return 0;
        }
        return 1;
    }
}

void GeneratePrime(int n){
    printf("Prime less than %d: ", n);
    int isFrist = 1;
    for( int i = 2; i < n; i++ ){
        if(isPrime(i)){
            if(isFrist) printf("%d", i);
            else printf(", %d", i);
            isFrist = 0;
        }
    }
}
