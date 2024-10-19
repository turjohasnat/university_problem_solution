//C Solution:
#include <stdio.h>

struct length{
    int m;
    int cm;
};

int main() {
    struct length l;
    scanf("%d %d", &l.m, &l.cm );

    float a = l.m + l.cm / 100.0;
    int b = l.m * 100 + l.cm;

    printf("Length in meter: %.2f\n", a);
    printf("Length in centimeter: %d\n", b);
    return 0;
}
