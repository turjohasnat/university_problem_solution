//C Solution:
#include<stdio.h>

int main(){
    int l = 0;
    char ch;
    
    FILE *fptr = fopen("sample.txt", "r");
    while((ch = fgetc(fptr)) != EOF ){
        if ( ch == '\n' ){
            l++;
        }
    }
    fclose(fptr);
    
    printf("%d", l);
    return 0;
}
