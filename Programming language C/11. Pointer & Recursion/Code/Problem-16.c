#include <stdio.h>
#include <string.h>

int isPalindrome( char *str );

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if(isPalindrome(str)) {
        printf("Palindrome.\n");
    } else {
        printf("Not Palindrome.\n");
    }
    return 0;
}

int isPalindrome( char *str ) {
    int l = 0;

    while (str[l] != '\0') {
        l++;
    }

    char *start = str;
    char *end = str + l - 1;

    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
