//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int result = 0;
    for ( int i = 1; i <= n; i++){
        int sum = pow(i,2)*(i+1);
        result += sum;
    }
    printf("Result: %d", result);

    return 0;
}
