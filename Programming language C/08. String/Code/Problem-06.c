//C Solution:
#include<stdio.h>

int main(){
    char string[1023];
    gets(string);

    int length = 0;
    while( string[length] != 0 ){
        length++;
    }

    for ( int i = 0; i < length; i++ ){
        if ( string[i] >= 'A' && string[i] <= 'Z' ) string[i] += 32;
        else if ( string[i] >='a' && string[i] <= 'z' ) string[i] -= 32;
    }
    printf("%s", string);
    return 0;
}
