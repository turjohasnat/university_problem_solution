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
    int k = n / 2;

    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            if ((i == 0 && j <= k) ||
                (i < k && (j == k || j == n - 1)) ||
                (i == k) ||
                (i > k && (j == 0 || j == k)) ||
                (i == n - 1 && j >= k)) {
                sum += array[i][j];
            }
        }
    }
    printf("%d", sum );
    return 0;
}
