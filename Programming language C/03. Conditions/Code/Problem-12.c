//C Solution:
#include<stdio.h>

int main(){
    float first_number, last_number, result;
    printf("Enter your two numbers:");
    scanf("%f %f", &first_number, &last_number);
    
    char choice;
    printf("Enter your choice (1,2,3,4):");
    scanf(" %c", &choice);
    
    if (choice == '1'){
        result = first_number + last_number;
        printf("Addition: %.2f", result);
    }
    else if (choice == '2'){
        result = first_number - last_number;
        printf("Subtraction: %.2f", result);
    }
    else if (choice == '3'){
        result = first_number * last_number;
        printf("Multiplication: %.2f", result);
    }
    else if (choice == '4'){
        result = first_number / last_number;
        printf("Quotient: %.2f", result);
    }
    
    return 0;

}