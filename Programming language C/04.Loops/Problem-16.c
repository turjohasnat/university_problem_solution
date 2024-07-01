//C Solution:
#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int gcd, lcm;
    for ( int i = 1; i <= num1 && i <= num2; i++){
        if ( num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    lcm = (num1*num2)/gcd;
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;

}