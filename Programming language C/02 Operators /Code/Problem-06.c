//Task - Program that will multiply and divide a number X by Y. (Use *= and /= operators)

//Sample input(X,Y):
// X = 56 , Y = 10

//Sample output:
//Multiplication:    560
//Division:   5

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
