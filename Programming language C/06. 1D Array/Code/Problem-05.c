//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp;
    int array[n];
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &array[i] );
    }
    for ( int i = 0; i < n/2; i++ ){
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    for ( int i = 0; i < n; i++ ){
        printf("%d ", array[i]);
    }
    return 0;
}
