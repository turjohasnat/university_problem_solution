//C Solution:
#include<stdio.h>

int main(){
    FILE *fptr = fopen("sample.txt", "w");

    if( fptr == NULL ){
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "1 Zahid\n2 Tanvir\n3 Akif\n");
    fclose(fptr);

    printf("Information saved to sample.txt\n");
    return 0;
}
