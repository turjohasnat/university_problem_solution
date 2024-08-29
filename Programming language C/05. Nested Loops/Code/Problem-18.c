//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        int x = n/2+1;
        for ( int j = 1; j <= n; j++ ){
            if ( j == 1 || j == n || i == x ) printf("H");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}