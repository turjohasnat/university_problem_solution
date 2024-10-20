//C Solution:
#include <stdio.h>

int printArrayRecursively( int *a, int n );

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    printArrayRecursively( &a, n );
    return 0;
}

int printArrayRecursively( int *a, int n ){
    if( n == 0 ) return;

    printf("%d ", *a);
    return printArrayRecursively( a + 1, n - 1 );
}
