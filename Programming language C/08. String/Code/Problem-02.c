//C Solution:
#include<stdio.h>
int main(){
    char str[10];
    scanf("%s", str);

    if ( str[0] >= 'A' && str[0] <= 'Z' ){
        str[0] += 32;
        puts(str);
    }
    else if ( str[0] >= 'a' && str[0] <= 'z' ){
        str[0] -= 32;
        puts(str);
    }
    else puts("Wrong input");

    return 0;
}
