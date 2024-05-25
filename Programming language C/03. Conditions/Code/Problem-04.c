//C Solution:
#include <stdio.h>

int main(){
    int angle1,angle2,angle3,triangle;
    printf("Enter your first angle value:");
    scanf("%d",&angle1);
    printf("Enter your second angle value:");
    scanf("%d",&angle2);
    printf("Enter your last angle value:");
    scanf("%d",&angle3);

    triangle=angle1+angle2+angle3;
    if (triangle==180){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}
