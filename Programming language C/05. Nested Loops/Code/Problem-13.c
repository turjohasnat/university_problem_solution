//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= n; j++ ){
            if ( i >= j ) printf("%d", j);
            else printf("_");
        }
        for ( int j = n-1; j >= 1; j-- ){
            if ( i >= j ) printf("%d", j);
            else printf("_");
        }
        printf("\n");
    }
    return 0;
}