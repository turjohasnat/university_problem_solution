//C Solution:
#include <stdio.h>

void printNum( int n );

int main() {
    int n = 1;
    printNum(n);
    return 0;
}

void printNum( int n ){
    if ( n > 10 ){
        return;
    }
    printf("%d ", n );
    printNum( n + 1 );
}

