//C Solution:
#include<stdio.h>

int main(){
    char character;
    scanf(" %c", &character);

    if ((character >= 'a' && character<= 'z')||(character >= 'A' && character<='Z')){
        printf("Alphabet\n");
    }
    else if (character>='0' && character<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special\n");
    }
    
    return 0;
}