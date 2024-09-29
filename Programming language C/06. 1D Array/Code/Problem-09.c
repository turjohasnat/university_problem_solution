//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A[n], B[n];
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &A[i] );
    }
    printf("Array A :");
    for ( int i = 0; i < n; i++ ){
        printf(" %d", A[i] );
        B[n-1-i] = A[i];
    }
    printf("\n");
    printf("Array B :");
    for ( int i = 0; i < n; i++ ){
        printf(" %d", B[i] );
    }
    printf("\n");
    return 0;
}