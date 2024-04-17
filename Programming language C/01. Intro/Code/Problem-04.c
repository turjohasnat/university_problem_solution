// Task - Program that will declare an integer, a floating point number, a character. Then it will initialize them with values and print those values.

/* Sample output:
The integer value: 5
The floating point value: 3.141593
The character value: a
*/

//C Solution:
#include <stdio.h>
    int main (){

        int integerNumber;
        integerNumber = 5;
        printf("The integer value:%d\n",integerNumber);

        float floatingNumber;
        floatingNumber = 3.141593;
        printf("The floating point value:%f\n",floatingNumber);

        char ch;
        ch='A';
        printf("The charater value:%c\n",ch);

        return 0;
    }
