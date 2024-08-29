//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x = n/2;
    for ( int i = 1; i <= x+1; i++ ){
        for( int j = 1; j <= x+1; j++ ){
            if ( i == j ) printf("*");
            else printf("_");
        }
        for( int j = x; j >= 1; j--){
            if ( i == j ) printf("*");
            else printf("_");
        }
        printf("\n");
    }
    for ( int i = x; i >= 1; i-- ){
        for( int j = 1; j <= x+1; j++ ){
            if ( i == j ) printf("*");
            else printf("_");
        }
        for( int j = x; j >= 1; j--){
            if ( i == j ) printf("*");
            else printf("_");
        }
        printf("\n");
    }
    return 0;
}