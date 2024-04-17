//Task - Program that will take two numbers X and Y as inputs, then calculate and print the values of their addition, subtraction, multiplication, division (quotient and reminder). 

//Sample input (X,Y):
// X = 5,  Y = 10.

/* Sample output:
Addition: 15
Subtraction: -5
Multiplication: 50
Quotient : 0
Reminder: 5
*/

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
