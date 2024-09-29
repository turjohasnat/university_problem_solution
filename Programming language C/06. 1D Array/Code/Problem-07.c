//C Solurion:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n );
    char array[n];
    int count = 0;
    for ( int i = 0; i < n; i++ ){
        scanf("%c", &array[i] );
        if ( array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O'|| array[i] == 'U' 
        || array[i] == 'a'|| array[i] == 'e'|| array[i] == 'i'|| array[i] == 'o'|| array[i] == 'u')
        {
            count++;
        }
    }
    printf("Count: %d\n", count );
    return 0;
}