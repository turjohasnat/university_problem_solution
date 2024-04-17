/* Task - Program that will take an floating point number as input from the keyboard and use printffunction to perform the followings:
(a)	Print the number right justified within 10 columns
(b)	Print the number to be right justified to 2 columns (Assuming the input has more than 2 digits)
(c)	Print the number rounded to two decimal places
(d)	Print the number rounded to integer (without using conversion or type casting)
(e)	Prints the number in exponential notation/scientific notation */

//Sample input:
//123.098

/*Sample output
(a) Val:          123.098000
(b) Val:123.098000
(c) Val:123.10
(d) Val:123
(e) Val:1.230980e+02 */

//C Solution:
#include <stdio.h>

int main(){
    float value;
    printf("Enter your value:");
    scanf("%f",&value);
    
    printf("Value:%10f\n",value);
    printf("Value:%2f\n",value);
    printf("Value:%.2f\n",value);
    printf("Value:%d\n",(int)(value+ 0.5));
    printf("Value:%e",value);
  
    return 0;
}
