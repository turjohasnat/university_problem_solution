//C Solution:
#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if( *ptr1 > *ptr2 ) printf("%d\n", *ptr1);
    else printf("%d\n", *ptr2);
    return 0;
}
