//C Solution:
#include <stdio.h>

int main(){
    int x, y;
    printf("Enter your first number:");
    scanf("%d",&x);
    printf("Enter your last number:");
    scanf("%d",&y);

    printf("Addition:%d\n", x+y);
    printf("Subtraction:%d\n", x-y);
    printf("Multiplication:%d\n", x*y);
    printf("Quotient:%d\n", x/y);
    printf("Reminder:%d\n", x%y);

    return 0;
}
