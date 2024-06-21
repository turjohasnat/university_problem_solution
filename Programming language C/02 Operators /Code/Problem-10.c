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
