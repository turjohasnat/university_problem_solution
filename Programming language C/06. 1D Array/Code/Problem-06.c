//C Solution:
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int array[n];
    for ( i = 0; i < n; i++ ){
        scanf("%d", &array[i]);
    }
    int max = array[0], min = array[0], maxIndex = 0, minIndex = 0;
    for ( i = 0; i < n; i++ ){
        if ( max < array[i] ){
            max = array[i];
            maxIndex = i;
        }
        if ( min > array[i] ){ 
            min = array[i];
            minIndex = i;
        }
    }
    printf("Max: %d, Index: %d\n", max, maxIndex);
    printf("Min: %d, Index: %d\n", min, minIndex);
    return 0;
}