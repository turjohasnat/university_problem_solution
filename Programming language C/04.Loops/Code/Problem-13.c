//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d! = ",n);
    int fact = 1;
    for ( int i = n; i >= 1; i-- ){
        fact *= i;
        if ( i < n ){
            printf(" X ");
        }
        printf ("%d", i);
    }
    printf(" = %d\n", fact);

    return 0;
}