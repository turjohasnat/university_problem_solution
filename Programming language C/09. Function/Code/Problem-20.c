//C Solution:
#include <stdio.h>

void Get_Number_And_Base(int *num, int *base);
void Convert_Number(int num, int base, char result[]);
void Show_Converted_Number(char result[]);

int main() {
    int num, base;
    char result[50];

    Get_Number_And_Base(&num, &base);
    if (base < 2 || base > 16) {
        printf("Base not within proper range!\n");
        return 0;
    }

    Convert_Number(num, base, result);
    Show_Converted_Number(result);

    return 0;
}

void Get_Number_And_Base(int *num, int *base) {
    scanf("%d %d", num, base);
}

void Convert_Number(int num, int base, char result[]) {
    char digits[] = "0123456789ABCDEF";
    int n = 0;

    if (num == 0) {
        result[n++] = '0';
    } else {
        while (num > 0) {
            int a = num % base;
            result[n++] = digits[a];
            num /= base;
        }
    }

    result[n] = '\0';

    for (int i = 0; i < n / 2; i++) {
        char temp = result[i];
        result[i] = result[n - 1 - i];
        result[n - 1 - i] = temp;
    }
}

void Show_Converted_Number(char result[]) {
    printf("%s\n", result);
}
