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

    for ( int i = 0; i <= m/2; i++ ){
        for ( int j = 0; j < n/2; j++ ){
            int temp = array[i][j];
            array[i][j] = array[i][n-j-1];
            array[i][n-j-1] = temp;
        }
    }

    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
