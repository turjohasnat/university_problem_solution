//C Solution:
#include <stdio.h>

int main(){
    char str1[123], str2[123];
    gets(str1);
    gets(str2);

    int i = 0, j = 0;
    int found = 0;
    while( str1[i] != 0 ){
        if ( str1[i] == str2[j] ){
            j++;

            if ( str2[j] != 0 ){
                found = 1;
                break;
            }
        }
        else{
            j = 0;
        }
        i++;
    }

    if ( found ) printf("Substring\n");
    else printf("Not substring\n");

    return 0;
}
