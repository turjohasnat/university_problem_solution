//Task - Program that will categorize a single character that is entered at the terminal, whether it is an alphabet, a digit or a special character.

// (Restriction:Without math.h)

//Sample input:
// z
// A
// 8
// *

//Sample output:
// Alphabet 
// Alphabet 
// Digit
// Special

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
