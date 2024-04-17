/* Task - Program that will define a global and a local variable with the same name but with different values, and then do the following steps in order-
A.	Print the value of the variable before defining the local variable
B.	Print the value of the variable after defining the local variable
C.	Explicitly print the value of the variable as global */

/* Sample output:
 A.	Global: 10
 B.	Local: 20
 C.	Global: 10 */

//C Solution:
#include <stdio.h>

int variable=10;
int main(){
    int *ptr=&variable;
    printf("A. Global:%d\n",variable);

    int variable=20;
    printf("B. Local:%d\n",variable);
    printf("C. Global:%d\n", *ptr);

    return 0;
}
