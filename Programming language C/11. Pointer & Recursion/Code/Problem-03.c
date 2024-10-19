//C Solution:
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int *ptr;
    int a[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    ptr = a;
    for( int i = 0; i < n; i++ ){
        printf("%d ", *( ptr + i));
    }
    
    return 0;
}
