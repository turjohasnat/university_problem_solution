//C Solution:
#include<stdio.h>

int main(){
    FILE *fptr = fopen("sample.txt", "r");
    
    if( fptr == NULL ){
        printf("Error opening file\n");
        return 1;
    }
    
    char ch;
    
    while(fgets(ch, sizeof(ch), fptr) != NULL ){
        printf("%s", ch);
    }
    
    fclose(fptr);
    return 0;
}
