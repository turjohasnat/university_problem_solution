//C Solution:
#include <stdio.h>

int sumF( int n );

int main(){
    int n;
    scanf("%d", &n);
    int sum = sumF(n);
    printf("Sum In Function: %d\n", sum);
    printf("Sum In Main: %d\n", sum);
    return 0;
}

int sumF( int n ){
    int sum = 0, num;
    for( int i = 0; i < n; i++ ){
        scanf("%d", &num);
        sum += num;
    }
    return sum;
}
