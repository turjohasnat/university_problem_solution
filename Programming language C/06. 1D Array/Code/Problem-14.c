//C Solution:
#include <stdio.h>

int main() {
    int A[123], B[123], C[123];

    int n;
    scanf("%d", &n);
    for( int i = 0; i < n; i++ ) scanf("%d", &A[i]);

    int m;
    scanf("%d", &m);
    for( int i = 0; i < m; i++ ) scanf("%d", &B[i]);

    int count = 0;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j++ ){
            if ( A[i] == B[j] ){
                C[count] = A[i];
                count++;
            }
        }
    }

    if ( count == 0 ) printf("Empty set\n");
    else{
        for ( int i = 0; i < count; i++ ){
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
