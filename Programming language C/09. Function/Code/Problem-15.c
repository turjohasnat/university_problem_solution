//C Solution:
#include<stdio.h>

int find_substr( int a[], int b[] );

int main(){
    int a[100], b[100];
    scanf("%s %s", a, b );

    int result = find_substr( a, b );
    printf("%d\n", result);
    return 0;
}

int find_substr( int a[], int b[] ){
    int Alen = 0;
    while( Alen[a] != 0 ){
        Alen++;
    }

    int Blen = 0;
    while( Blen[b] != 0 ){
        Blen++;
    }

    int length = Alen - Blen;
    for( int i = 0; i <= length; i++ ){
        int found = 1;
        for( int j = 0; j < Blen; j++ ){
            if( a[i+j] != b[j] ){
                found = 0;
                break;
            }
        }
        if( found ) return 1;
    }
    return -1;
}
