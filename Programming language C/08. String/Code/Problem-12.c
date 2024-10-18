//C Solution:
#include<stdio.h>
int main(){
    char string[100];
    gets(string);
  
    int i = 0;
    while ( string[i] != 0 ){
        if ( string[i] == ' ' ) printf("\n");
        else printf("%c",string[i]);
        i++;
    }
    return 0;
}
