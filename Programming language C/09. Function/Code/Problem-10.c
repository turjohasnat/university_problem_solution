//C Solution:
#include <stdio.h>

void sortF( int n, int A[]);

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &A[i]);
    }
    sortF(n, A);
    for( int i = 0; i < n; i++ ){
        printf("%d ", A[i]);
    }
    return 0;
}

void sortF( int n, int A[]){
    for( int i = 0; i < n; i++ ){
        for( int j = i+1; j < n; j++ ){
            if( A[i] > A[j] ){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
