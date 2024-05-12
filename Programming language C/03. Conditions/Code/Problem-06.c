//Task - Program that will read from the console a random number and check if it is a nonzero positive number.If the check is yes, it will determine if the number is a power of 2.

// If the check fails the program will check for two more cases. If the number is zero, the program will print “Zero is not a valid input”. Else it will print “Negative input is not valid”.

//Sample input:
// 0, 1, 512, 1022, -512

//Sample output:
// Zero is not a valid input
// Yes
// Yes
// No
// Negative input is not valid

//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    if (num == 0){
        printf("Zero is not a valid input");
    }
    else if (num < 0){
        printf("Negative input is not valid");
    }
    else{
            if ((num & (num-1)) == 0 ){
            printf ("Yes");
            }
            else{
            printf("No");
            }
    }
    return 0;
}
