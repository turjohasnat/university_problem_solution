//C Solution:
#include<stdio.h>
int main(){
    char string[2];
    scanf("%s", string);

    if ( string[0] >= 'A' && string[0] <='Z' ){
        string[0] += 32;
        puts(string);
    }
    else puts("Wrong input");
    return 0;
}
