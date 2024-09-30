//C Solution:
#include<stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n );
    int array[m][n];
    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            scanf("%d", &array[i][j] );
        }
    }
    printf("Row-wise:");
    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            printf(" %d", array[i][j] );
        }
    }
    printf("\n");
    printf("Column-wise:");
    for ( int j = 0; j < n; j++ ){
        for ( int i = 0; i < m; i++ ){
            printf(" %d", array[i][j] );
        }
    }

    return 0;
}
