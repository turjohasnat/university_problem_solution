//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n );
    int array[n][n];
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            if ( i == j ) array[i][j] = 1;
            else array[i][j] = 0;
        printf("%d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}