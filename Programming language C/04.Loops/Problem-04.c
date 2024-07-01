#include<stdio.h>

int main(){
    int i, n;
    scanf("%d", &n);

    float num, sum = 0.0, avg;
    for( i = 1; i <= n; i++ ){
        scanf("%f", &num);
        sum += num;
    }
    
    avg = sum / n;
    printf("%f\n", avg);
    return 0;
}