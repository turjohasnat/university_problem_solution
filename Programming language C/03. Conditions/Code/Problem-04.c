//Task - Program that will check whether a triangle is valid or not, when the three angles (angle value should be such that, 0<value<180) of the triangle are entered through the keyboard. 
// [Hint:A triangle is valid if the sum of all the three angles is equal to 180 degrees.]

//Sample input:
// 90      45      45
// 30       110      40
// 160     20        30
// 0         1800

//Sample output:
// Yes
// Yes
// No
// No

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
