//C Solution:
#include<stdio.h>

int main(){
    char string_1[100], string_2[100];
    gets(string_1);

    int i;
    for( i = 0; string_1[i] != 0; i++ ){
        string_2[i] = string_1[i];
    }

    printf("%s\n", string_2);
    return 0;
}
