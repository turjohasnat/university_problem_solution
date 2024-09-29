//C Solution;
#include<stdio.h>
int main(){

    int A[100], B[100];

    int n;
    scanf("%d", &n );
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &A[i] );
    }

    int m;
    scanf("%d", &m);
    for ( int i = 0; i < m; i++ ){
        scanf("%d", &B[i] );
    }

    if ( n > m ){
        for ( int i = 0; i < n; i++ ){
            int temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }
    }
    else {
        for ( int i = 0; i < m; i++ ){
            int temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }
    }
    
    printf("Array A :");
    for ( int i = 0; i < m; i++ ){
        printf(" %d", A[i] );
    }
    printf("\n");
    printf("Array B :");
    for (int i = 0; i < n; i++ ){
        printf(" %d", B[i] );
    }
    printf("\n");

    return 0;
}