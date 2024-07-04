//C Solution:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    float sum = 0.0, num, avg;
    for ( int i = 1; i <= n; i++ ){
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("AVG of %d inputs: %f\n", n, avg);

    return 0;
}
