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
    int symmetric = 1;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            if ( array[i][j] != array[j][i] ){
                symmetric = 0;
                break;
            }
        }
        if ( !symmetric ){
            break;
        }
    }
    if ( symmetric ) printf("Yes");
    else printf("No");

    return 0;
}
