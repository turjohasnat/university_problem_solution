//C Solution:
#include<stdio.h>
int main(){
    int n, r;
    printf("Enter your N & R value:");
    scanf("%d %d", &n, &r);

    int numerator = 1, denominator_r = 1, denominator_nr = 1;
    for (int i = 1; i <= n; i++) {
        numerator *= i; 
    }

    for (int i = 1; i <= r; i++) {
        denominator_r *= i; 
    }

    for (int i = 1; i <= (n - r); i++) {
        denominator_nr *= i;
    }
    int result = numerator / (denominator_r * denominator_nr);
    printf("%d\n", result);

    return 0;
}