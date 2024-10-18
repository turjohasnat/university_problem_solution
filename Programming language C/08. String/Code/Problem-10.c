//C Solution:
#include<stdio.h>

int main(){
    char string_1[100], string_2[100];
    gets(string_1);
    gets(string_2);

    int i = 0;
    while(string_1[i] != 0 ){
        i++;
    }

    int j = 0;
    while(string_2[j] != 0 ){
        string_1[i] = string_2[j];
        i++;
        j++;
    }

    printf("%s\n", string_1);
    return 0;
}
