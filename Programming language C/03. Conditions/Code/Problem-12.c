//Task - Program that will construct a menu for performing arithmetic operations. The user will give two real numbers (a,b) on which the arithmetic operations will be performed and an integer number (1<= Choice<=4)asa choice. Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division (quotient) respectively.

// Sample input (a,b,Choice):
// 5     10
// 3
// -5     10
// 4

//Sample output:
// Multiplication: 50
// Quotient: 0

//C Solution:
#include<stdio.h>

int main(){
    int first_number, last_number, result;
    printf("Enter your two numbers:");
    scanf("%d %d", &first_number, &last_number);
    
    char choice;
    printf("Enter your choice (1,2,3,4):");
    scanf(" %c", &choice);
    
    if (choice == '1'){
        result = first_number + last_number;
        printf("Addition: %d", result);
    }
    else if (choice == '2'){
        result = first_number - last_number;
        printf("Subtraction: %d", result);
    }
    else if (choice == '3'){
        result = first_number * last_number;
        printf("Multiplication: %d", result);
    }
    else if (choice == '4'){
        result = first_number / last_number;
        printf("Quotient: %d", result);
    }
    
    return 0;

}
