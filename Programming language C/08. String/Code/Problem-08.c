//C Solution:
#include<stdio.h>

int main(){
    char string_1[1023], string_2[1023];
    gets(string_1);
    gets(string_2);

    int result = strcmp(string_1, string_2);

    if ( result < 0 ) printf("%s", string_1);
    else if ( result > 0 ) printf("%s", string_2);
    else printf("Both equal");

    return 0;
}
