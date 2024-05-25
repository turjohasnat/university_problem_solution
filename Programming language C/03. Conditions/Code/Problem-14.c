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
        if ( last_number == 0 ){
            printf("Error: Divisor is zero");
        }
        else {
            char c;
            printf("Enter your Case-(1,2): ");
            scanf(" %c", &c); 

            if (c == '1'){
            result = first_number / last_number;
            printf("Quotient: %d", result);
        
            }
            else if (c == '2'){
               result = first_number % last_number;
                printf("Reminder: %d", result); 
            }
            
        }    
    }
        
    
    return 0;

}
