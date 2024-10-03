//C Solution:
#include <stdio.h>

void multipliesF( int n, int A[] );

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &A[i]);
    }

    multipliesF(n,A);
    for( int i = 0; i < n; i++ ){
        printf("%d ", A[i]);
    }
    return 0;
}

void multipliesF( int n, int A[] ){
    for( int i = 0; i < n; i++ ){
        A[i] *= 2;
    }
}
