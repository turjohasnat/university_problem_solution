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
