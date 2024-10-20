//C Solution:
#include <stdio.h>

void countVowelConsonent( char *str, int *vowel, int *consonent);

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int vowel = 0, consonent = 0;
    countVowelConsonent(str, &vowel, &consonent);

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonent);

    return 0;
}

void countVowelConsonent( char *str, int *vowel, int *consonent) {
    while ( *str != '\0' ) {
        if( (*str >= 'a' && *str <= 'z' ) || (*str >= 'A' && *str <= 'Z') ) {
            if(*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || *str == 'i' ||
               *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U' ) {
                (*vowel)++;
            } else {
                (*consonent)++;
            }
        }
        str++;
    }
}
