//C Solution:
#include<stdio.h>
int main(){
    for ( int i = 1; ; i++ ){
        char input;
        scanf(" %c", &input);
        if ( input == 'A') break;
        printf("Input %d: %c\n", i, input);
    }
    
    return 0;
}