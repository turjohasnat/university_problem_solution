//C Solution:
#include<stdio.h>
int main(){
    int n, result = 0;
    scanf("%d", &n);
    
    for( int i = 1; i <= n; i++ ){
        int sum;
        if ( i % 2 == 0 ){
            sum = i*(-1);
        }
        else sum = i;
        result += sum;
    }
    printf("Result: %d",result);

    return 0;
}