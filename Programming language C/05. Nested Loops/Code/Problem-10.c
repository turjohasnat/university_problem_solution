//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        for ( int j = i; j <= n-1; j++ ){
            printf("_");
        }
        for ( int j = 1; j <= i; j++ ){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}