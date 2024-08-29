//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        int x = n/2+1;
        for ( int j = 1; j <= n; j++ ){
            if ( i == x || j == x || i + j == x + 1 || i + j == 3 * x - 1 || i - j == x - 1 || j - i == x - 1 ) printf("&");
            else printf("_");
        }
        printf("\n");
    }
    return 0;
}
