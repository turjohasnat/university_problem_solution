//Task - Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)
//	(a+b)≤80 
//	!(a+c)
//	a!=0

//Sample input (a, b, c):
// a = 10, b = -10, c = 0

//Sample output:
// a)	1
// b)	0
// c)   1


//C Solution:
#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c;
    printf("Enter your a value:");
    scanf("%d",&a);
    printf("Enter your b value:");
    scanf("%d",&b);
    printf("Enter your c value:");
    scanf("%d",&c);

    if ((a+b)<=80){
        printf("This statement is:%d\n",true);
    }
    else{
        printf("This statement is:%d\n",false);
    }

    if (!(a+c)){
        printf("This statement is:%d\n",true);
    }
    else{
        printf("This statement is:%d\n",false);
    }

    if(a!=0){
        printf("This statement is:%d\n",true);
    }
    else{
        printf("This statement is:%d\n",false);
    }    

    return 0;
}
