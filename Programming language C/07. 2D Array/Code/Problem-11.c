//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n][n];

    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            scanf("%d", &array[i][j]);
        }
    }
    int sum = 0;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            if ( ( i + j ) % 2 == 0 && j % 2 != 0 ) sum += array[i][j];
            if ( ( i + j ) % 2 != 0 && j < n ) sum += array[i][j];
        }
    }
    printf("%d", sum );
    return 0;
}
