//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for ( int row = 1; row <= n; row++ ){
            for ( int col = 1; col <= n; col++){
                printf("%d", col);
            }
        printf("\n", row);
    }    

    return 0;

}