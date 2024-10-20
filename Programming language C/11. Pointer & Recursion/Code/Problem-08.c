//C Solution:
#include <stdio.h>

void revArray( int *a, int n );

int main() {
    int n;
    scanf("%d", &n);


    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    revArray( &a, n );
    return 0;
}

void revArray( int *a, int n ){
    for( int i = n-1; i >= 0; i-- ){
        printf("%d ", *(a + i));
    }
}
