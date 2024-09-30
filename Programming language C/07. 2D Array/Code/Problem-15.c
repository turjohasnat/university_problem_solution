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
    int sum = 0;
    for ( int i = 0; i < m; i++ ){
        for ( int j = 0; j < n; j++ ){
            sum += array[i][j];
        }
    }
    printf("%d ", sum);
    return 0;
}
