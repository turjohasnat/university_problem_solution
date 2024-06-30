//C Solution:
#include<stdio.h>

int main(){
    float num1,num2, result;
    char expression;
    printf("Enter your first number:");
    scanf("%f",&num1);
    printf("Enter your last number:");
    scanf("%f",&num2);
    printf("Enter your expression:");
    scanf(" %c",&expression);

    switch (expression)
    {
    case '+':
        result = num1 + num2;
        printf("Addition: %f\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction: %f\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication: %f\n", result);
        break;
    case '/':{
            if (num2 == 0){
                printf("Division: Zero as divisor is not valid!\n");
            }
            else {
                result = num1/num2;
                printf("Division: %f\n",result);
            
            }
            break;
    }
    default:
    printf("Invalid\n");
        break;
    }

    return 0;
}