// Task - Program that will take three integer numbers from keyboard but assign only the first and last inputs to variables and skip any assignment of the middle one.

/* Sample input:
20     50     100
*/

/*Sample output:
First Value = 20,  Last Value = 100
*/

//C Solution:
#include <stdio.h>

int main(){
    int firstNumber, secondNumber, lastNumber;

    printf("Enter your first number:");
    scanf("%d",&firstNumber);
    printf("Enter your second number:");
    scanf("%d",&secondNumber);
    printf("Enter your last number:");
    scanf("%d",&lastNumber);

    printf("\nFirst Value:%d\n",firstNumber);
    printf("Last Value:%d\n",lastNumber);

    return 0;
}
