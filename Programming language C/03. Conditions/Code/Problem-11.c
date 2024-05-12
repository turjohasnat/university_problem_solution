//Task - Program that will take the final score of a student in a particular subject as input and find his/her grade.
// Marks  ||	Letter Grade ||	Marks	  || Letter Grade	|| Marks	      || Letter Grade
// 90-100	||  A 	         || 70-73	  ||   C+ 	      || Less than 55 ||	F
// 86-89	||  A- 	         || 66-69	  ||   C 		      || 82-85	      ||  B+ 	
// 62-65	||  C-		       || 78-81 	||   B 	        || 58-61	      ||  D+ 		
// 74-77	||  B- 	         || 55-57	  ||    D 		

//Sample input:
// 91.5
// 50

//Sample output:
// Grade: A
// Grade: F

//C Solution:
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num >= 90){
        printf("Grade: A");
    }
    else if (num >= 86 && num <= 89 ){
        printf("Grade: A-");
    }
    else if (num >= 82 && num <= 85 ){
        printf("Grade: B+");
    }
    else if (num >= 78 && num <= 81 ){
        printf("Grade: B");
    }
    else if (num >= 74 && num <= 77 ){
        printf("Grade: B-");
    }
    else if (num >= 70 && num <= 73 ){
        printf("Grade: C+");
    }
    else if (num >= 66 && num <= 69 ){
        printf("Grade: C");
    }
    else if (num >= 62 && num <= 65 ){
        printf("Grade: C-");
    }
    else if (num >= 58 && num <= 61 ){
        printf("Grade: D+");
    }
    else if (num >= 55 && num <= 57 ){
        printf("Grade: D");
    }
    else{
        printf("Grade: F");
    }
    return 0;
}
