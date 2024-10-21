//C Solution:
#include<stdio.h>

int main(){
    FILE *fptr = fopen("sample.txt", "r");
    
    char ch[1000];
    while(fgets(ch, sizeof(ch), fptr) != NULL ){
        printf("%s", ch);
    }
    
    fclose(fptr);
    return 0;
}
