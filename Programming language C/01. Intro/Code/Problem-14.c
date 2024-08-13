//C Solution:
#include <stdio.h>
int global = 10;
int main() {
    printf("A. Global: %d\n", global);
    int global = 20;
    printf("B. Local: %d\n", global);
    {
        extern int global;
        printf("C. Global: %d\n", global);
    }
    return 0;
}
