//C Solution:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            printf("%d ", array[i]);
        }
    }

    printf("\n");
    return 0;
}
