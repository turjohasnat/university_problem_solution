//C Solution:
#include <stdio.h>

int main(){
    float value;
    scanf("%f",&value);
    
    printf("(a) Val:%10f\n",value);
    printf("(b) Val:%2f\n",value);
    printf("(c) Val:%.2f\n",value);
    printf("(d) Val:%.0f\n",value);
    printf("(e) Val:%e\n",value);
  
    return 0;
}