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
