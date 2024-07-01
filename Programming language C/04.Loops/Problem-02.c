//C Solution:
#include<stdio.h>

int main(){
    int i, n;
    scanf("%d", &n);
    for( i = 1; i <= n ; i++){
        printf("%d", 2*i - 1);
        if ( i < n ){
            printf(", ");
        }
    }
    return 0;
}