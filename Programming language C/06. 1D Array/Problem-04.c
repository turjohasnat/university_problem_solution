//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    int sum = 0;
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &array[i] );
        if ( i % 2 == 0 ){
            sum += array[i];
        }
    }
    printf("%d", sum);

    return 0;
}