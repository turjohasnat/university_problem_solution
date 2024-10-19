//C Solution:
#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    printf("%d", sum);
    return 0;
}
