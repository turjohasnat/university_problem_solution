#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int search_num;
    scanf("%d", &search_num);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (search_num == array[i]) {
            if (found == 0) {
                printf("FOUND at index position:");
            }
            printf(" %d", i);
            found = 1;
        }
    }
    if (found) printf("\n");
    else printf("NOT FOUND\n");
    return 0;
}
