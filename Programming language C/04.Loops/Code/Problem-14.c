//C Solution:
#include<stdio.h>
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    int numerator = 1, numerator_r = 1, numerator_nr = 1;

    for ( int i = n; i >= 1; i-- ){
        numerator *= i; 
    }
    for ( int i = r; i >= 1; i-- ){
        numerator_r *= i;
    }
    for ( int i = (n-r); i >= 1; i--){
        numerator_nr *= i; 
    }
    
    int result = numerator / (numerator_r*numerator_nr);
    printf("%d", result);

    return 0;
}