// Task - Program that will receive the values of an integer, a floating point number, a character from the keyboard and print those values.

/* Sample input:
5
3.141593
A
*/

//C Solution:
#include <stdio.h>

int main (){

    int integerNumber;
    printf("Enter your integer value:");
    scanf("\n%d",&integerNumber);
    printf("The integer value:%d\n\n",integerNumber);

    float floatingNumber;
    printf("Enter your floating point value:");
    scanf("\n%f",&floatingNumber);
    printf("The floating point value:%f\n\n",floatingNumber);

    char ch;
    printf("Enter your character value:");
    scanf("\n%c",&ch);
    printf("The character value:%c\n\n",ch);

    return 0;
}
