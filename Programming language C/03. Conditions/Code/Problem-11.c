//C Solution:
#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b)<=80 && c>=0){
        printf("%d\n",true);
    }
    else{
        printf("%d\n",false);
    }

    if ((a-b)==0||c!=0){
         printf("%d\n",true);
    }
    else{
        printf("%d\n",false);
    }

    if (a!=b||!(b<a) && c>0){
         printf("%d\n",true);
    }
    else{
        printf("%d\n",false);
    }
    
    return 0;
}