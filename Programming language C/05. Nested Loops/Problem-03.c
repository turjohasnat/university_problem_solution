//C Solution:
#include<stdio.h>
int main(){
    int n, num;
    scanf("%d", &n);
    for ( int row = 1; row <= n; row++){
        num = row;
        for ( int col = 0; col < row; col++){
            printf("%d", num++);
        }
        printf("\n");
    }    

    return 0;

}