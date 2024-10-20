//C Solution:
#include <stdio.h>

int arraySum( int *a, int n );

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    int result = arraySum ( &a, n );
    printf("%d\n", result);

    return 0;
}

int arraySum( int *a, int n ){
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        sum += *(a+i);
    }
    return sum;
}
