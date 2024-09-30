//C Solution:
#include<stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int array[m][n];

    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            scanf("%d", &array[i][j]);
        }
    }

    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            for ( int k = 0; k < m; k++ ){
                for ( int l = 0; l < n; l++ ){
                    if ( i != k || j != l ){
                        if ( array[i][j] == array[k][l] ){
                            array[k][l] = -1;
                        }
                    }
                }
            }
        }
    }

    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            printf("%d ", array[i][j] );
        }
        printf("\n");
    }
    return 0;
}
