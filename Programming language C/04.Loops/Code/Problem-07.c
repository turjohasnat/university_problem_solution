//C Solution:
#include<stdio.h>
int main(){
    for ( int i = 1; ; i++){
        char ch;
        scanf(" %c", &ch);
        if ( ch == 'A') break;
        printf("Input %d: %c\n", i, ch);
    }
    return 0;
}