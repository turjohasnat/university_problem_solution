//C Solution:
#include <stdio.h>

int evenOrOdd( int start, int end, int choice );

int main(){
    int start, end, choice;
    scanf("%d %d", &start, &end);

    printf("Enter your choice(0,1): ");
    scanf("%d", &choice);

    if( choice == 1 ) printf("Even numbers: ");
    else printf("Odd numbers: ");

    evenOrOdd( start, end, choice );
    return 0;
}

int evenOrOdd( int start, int end, int choice ){
    if( start > end ) return;

    if( choice ){
        if( start % 2 == 0 ){
            printf("%d ", start);
        }
    }
    else{
        if( start % 2 != 0 ){
            printf("%d ", start);
        }
    }

    evenOrOdd( start + 1, end, choice );
}
