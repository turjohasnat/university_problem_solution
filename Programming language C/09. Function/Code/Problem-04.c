//C Solution:
#include <stdio.h>

int sumF( int n, int A[]);

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &A[i]);
    }
    int sum = sumF(n, A);
    printf("Sum In Function: %d\n", sum);
    printf("Sum In Main: %d\n", sum);
    return 0;
}

int sumF( int n, int A[]){
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        sum += A[i];
    }
    return sum;
}
