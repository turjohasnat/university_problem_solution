//C Solution:
#include<stdio.h>

int main(){
    char character;
    printf("Enter your a single character:");
    scanf(" %c",&character);

    if ((character >= 'a' && character<= 'z')||(character >= 'A' && character<='Z')){
        printf("Alphabet");
    }
    else if (character>='0' && character<='9'){
        printf("Digit");
    }
    else{
        printf("Special");
    }
    
    return 0;
}
