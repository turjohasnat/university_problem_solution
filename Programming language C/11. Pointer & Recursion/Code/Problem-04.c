//C Solution:
#include <stdio.h>

int strLen( char *string );

int main() {
    char string[123];
    gets(string);

    int l = strLen( &string );
    printf("%d\n", l);
    return 0;
}

int strLen( char *string ){
    int len = 0;
    while( *string != '\0' ){
        len++;
        string++;
    }
    return len;
}
