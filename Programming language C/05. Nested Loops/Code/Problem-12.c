//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x = n/2;
    for ( int i = 1; i <= x+1; i++ ){
        for ( int j = i; j <= x; j++ ){
            printf("_");
        }
        for ( int j = 1; j <= 2*i-1; j++ ){
            printf("*");
        }
        printf("\n");
    }
    for ( int i = 1; i <= x; i++ ){
        for ( int j = i; j <= 2*i-1; j++ ){
            printf("_");
        }
        for ( int j = 2*x-2*i+1; j >= 1; j-- ){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}