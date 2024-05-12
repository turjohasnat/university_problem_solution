//Task - Program that will evaluate simple expressions of the form-  
// <number1><operato  r><number2>
// ; where operators are (+, - , *, /)
// And if the operator is “/”, then check if <number2> nonzero or not.

//Sample input:
// 100     *      55.5
// 100     /      -5.5
// 100    /        0

//Sample output:
// Multiplication:  5550
// Division:   -18.181818
// Division:    Zero as divisor is not valid!

//C Solution:
#include<stdio.h>

int main(){
    int num1,num2, result;
    char expression;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your last number:");
    scanf("%d",&num2);
    printf("Enter your expression:");
    scanf(" %c",&expression);

    switch (expression)
    {
    case '+':
        result = num1 + num2;
        printf("Addition: %d", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction: %d", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication: %d", result);
        break;
    case '/':{
            if (num2 == 0){
                printf("Zero as divisor is not valid!");
            }
            else {
                result = num1/num2;
                printf("Division: %d",result);
            
            }
            break;
    }
    default:
    printf("Invalid");
        break;
    }

    return 0;
}
