//C Solution:
#include<stdio.h>

int main(){
    char string[1023];
    scanf("%s", string);

    int length = 0;
    while( string[length] != 0 ){
        length++;
    }

    int isPalindrome = 1;
    for ( int i = 0; i < length; i++ ){
        if ( string[i] != string[length-1-i] ){
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) puts("Palindrome");
    else puts("Not Palindrome");

    return 0;
}
