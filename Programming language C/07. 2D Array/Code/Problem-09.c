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
    for ( int j = 0; j < n; j++ ){
        sum += array[0][j];
    }

    for ( int j = 0; j < n; j++ ){
        sum += array[n-1][j];
    }

    for ( int i = 1; i < n-1; i++ ){
        sum += array[i][i];
        if ( i != n-1-i ) sum += array[i][n-1-i];
    }
    printf("%d", sum );

    return 0;
}
