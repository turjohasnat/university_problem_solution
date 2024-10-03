//C Solution:
#include <stdio.h>

int minValue( int n, int A[] );

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &A[i]);
    }
    int min = minValue(n,A);
    printf("Minimum Value: %d\n", min);
    return 0;
}

int minValue( int n, int A[] ){
    int min = 123346354;
    for( int i = 0; i < n; i++ ){
        if( A[i] < min ) min = A[i];
    }
    return min;
}
