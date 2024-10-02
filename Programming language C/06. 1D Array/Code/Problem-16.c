//C Solution:
#include <stdio.h>

int main() {
    int A[123], B[123], C[123];

    int n;
    scanf("%d", &n);
    for( int i = 0; i < n; i++ ){
        scanf("%d", &A[i]);
    }

    int m;
    scanf("%d", &m);
    for( int i = 0; i < m; i++ ){
        scanf("%d", &B[i]);
    }

    int k = 0;
    for( int i = 0; i < n; i++ ){
        int isPresent = 0;
        for( int j = 0; j < m; j++ ){
            if(A[i] == B[j]){
                isPresent = 1;
                break;
            }
        }
        if(!isPresent){
            C[k++] = A[i];
        }
    }

    for( int i = 0; i < k; i++ ){
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
