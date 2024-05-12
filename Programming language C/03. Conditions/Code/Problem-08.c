//Task - Program that will decide whether a year is leap year or not.

// Yes, if ( Year % 4 == 0 && year % 100 != 0 )   ||  ( Year % 400 ==0 )

//Sample input:
// 2000
// 2004
// 2014

//Sample output:
// Yes
// Yes
// No

//C Solution:
#include<stdio.h>

int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);

    if (( year % 4 == 0 && year % 100 != 0 )   ||  ( year % 400 ==0 )){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
