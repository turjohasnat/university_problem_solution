//C Solution:
#include <stdio.h>

int maxElement( int *a, int n );

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    int max = maxElement( &a, n );
    printf("%d", max);
    return 0;
}

int maxElement( int *a, int n ){
    if( n == 1 ) return *a;

    int max = ( maxElement ( a + 1, n - 1));
    return ( *a > max ) ? *a : max;
}
