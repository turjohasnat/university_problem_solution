//C Solution:
#include<stdio.h>
int main(){
    char string[2];
    scanf("%s", string);

    if ( string[0] >= '0' && string[0] <= '9' ){
        string[0] -= 0;
        puts(string);
    }
    else puts("Wrong input");
    return 0;
}
