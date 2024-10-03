//C Solution:
#include <stdio.h>

void printChar( char c );

int main(){
    char c;
    scanf(" %c", &c);
    printChar(c);
    return 0;
}

void printChar( char c ){
    printf("Value received from main: %c\n", c);
}
