//C Solution:
#include <stdio.h>

void evenF( int n, int A[] );

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &A[i]);
    }
    evenF(n,A);
    return 0;
}

void evenF( int n, int A[] ){
    for( int i = 0; i < n; i++ ){
        if ( A[i] % 2 == 0 ) printf("%d ", A[i]);
    }
}
