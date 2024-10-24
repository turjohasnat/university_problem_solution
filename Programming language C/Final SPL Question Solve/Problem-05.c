#include <stdio.h>

void encoder(char *p, int shift) {
    for (; *p; p++)
        if (*p >= 'a' && *p <= 'z')
            *p = 'a' + (*p - 'a' + shift) % 26;
        else
            *p = 'A' + (*p - 'A' + shift) % 26;
}

int main() {
    char s[100]; scanf(" %[^\n]", s);
    int shift; scanf("%d", &shift);
    encoder(s, shift);
    puts(s);
}
