//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for ( int i = 0; i < n; i++){
        scanf("%d", &array[i] );
        if ( array[i] % 3 == 0 ) printf("-1 ");
        else printf("%d ", array[i]);
    }
    return 0;
}