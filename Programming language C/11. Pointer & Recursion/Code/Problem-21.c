//C Solution:
#include<stdio.h>

int main(){
    FILE *fptr = fopen("sample.txt", "a");
    int n;
    scanf("%d", &n);
    
    char ch[1000];
    getchar();
    for( int i = 0; i < n; i++ ){
        fgets(ch, fptr);
    }
    fclose(fptr);
    return 0;
}
