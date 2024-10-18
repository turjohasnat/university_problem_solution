//C Solution:
#include<stdio.h>

int main(){
    char string_1[100], string_2[100];
    gets(string_1);
    gets(string_2);

    int i = 0;
    while( string_1[i] != 0 && string_2[i] != 0 ){
        if ( string_1[i] < string_2[i] ){
            printf("%s\n", string_1);
            return 0;
        }
        else if ( string_1[i] > string_2[i] ){
            printf("%s\n", string_2);
            return 0;
        }
        i++;
    }

    if( string_1[i] != 0 && string_2[i] != 0 ){
        printf("Both equal\n");
    }
    else if( string_1[i] != 0 ){
        printf("%s\n", string_2);
    }
    else printf("%s\n", string_1);

    return 0;
}
