//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int prime = 1;
    if ( n < 2 ){
        prime = 0;
    }
    else {
        for ( int i = 2; i < n; i++ ){
            if ( n % i == 0 ){
                prime = 0;
            }
        }
    }
    if ( prime ) printf("Prime\n");
    else printf("Not Prime\n");

    return 0;

}