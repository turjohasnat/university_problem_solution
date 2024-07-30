//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum, result = 0;
    for (int i = 1; i <= n; i++){
        if ( i % 2 == 0 ){
            sum = -1 * i;
        }
        else sum = i;
        result += sum; 
    }
    printf("Result: %d", result);

    return 0;
}