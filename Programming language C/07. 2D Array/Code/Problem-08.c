//C Solution:
#include<stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n );
    int array[m][n];
    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            scanf("%d", &array[i][j]);
        }
    }

    int max_a = array[0][0];
    int max_i = 0, max_j = 0;

    for ( int i  = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            if ( max_a < array[i][j] ){
                max_a = array[i][j];
                max_i = i;
                max_j = j;
             }
        }
    }

    printf("Max: %d\n", max_a  );
    printf("Location: [%d][%d]", max_i, max_j );
    return 0;
}
