//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n );
    for( int i = 1; i <= n; i++ ){
        for ( int j = n; j >= 1; j-- ){
            if ( i == 1 || i == n || j == i-1 ) printf("Z");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}