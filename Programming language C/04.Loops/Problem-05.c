//C Solution:
#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if ( x > y ){
        for ( int i = x; i <= x; i-- ){
            if ( i == y ) {
                printf("Reached!\n");
                break;
            }
            printf("%d, ", i*i );
        }
    }
    else if ( x < y ){
        for ( int i = x; i <= y; i++ ){
            if ( i == y ) {
                printf("Reached!\n");
                break;
            }
            printf("%d, ", i*i );
        }
    }
    else printf("Reached!\n");

    return 0;

}
