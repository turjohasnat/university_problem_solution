//C Solution:
#include <stdio.h>
    int main() {
    int n;
    scanf("%d", &n);

    int num = 0,sum = 0;
    for (int i = 1; i <= n; i++) {
    num =num * 10 + i;
    sum += num;
    }

    printf("%d\n", sum);
    return 0;
}