//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int row = 1; row <= n; row++){
        for ( int col = row; col < row + n; col++){
            printf("%d", col);
        }
        printf("\n");
    }    

    return 0;

}