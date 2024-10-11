//C Solution:
#include<stdio.h>

int find_substr( char a[], char b[] );
int str_length( char strl[] );

int main(){
    int a[100], b[100];
    scanf("%s %s", a, b);

    int result = find_substr( a, b );
    printf("%d\n", result);
    return 0;
}

int str_length( char strl[] ){
    int length = 0;
    while ( strl[length] != 0 ){
        length++;
    }
    return length;
}

int find_substr( char a[], char b[] ){
    int lenA = str_length(a);
    int lenB = str_length(b);

    int len = lenA - lenB;
    for( int i = 0; i <= len; i++ ){
        int found = 1;
        for( int j = 0; j < lenB; j++ ){
            if( a[i+j] != b[j] ){
                found = 0;
                break;
            }
        }
        if( found ) return 1;
    }
    return -1;
}
