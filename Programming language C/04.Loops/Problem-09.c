//C Solution:
#include<stdio.h>
int main(){
    int student;
    scanf("%d", &student);
    for ( int i = 1; i <= student; i++){
        float attendance, assignment, ct, mid, final; 
        scanf("%f %f %f %f %f", &attendance, &assignment, &ct, &mid, &final);

        attendance = (attendance*5)/5.0;
        assignment = (assignment*10)/10.0;
        ct = (ct*15)/15.0;
        mid = (mid*30)/50.0;
        final = (final*40)/100.0;

        float total_marks = attendance + assignment + ct + mid + final;

        if ( total_marks >= 90 && total_marks <=100 ){
            printf("Student %d : A\n", student);
        }
        else if ( total_marks >= 86 && total_marks <= 89 ){ 
            printf("Student %d : A-\n", student); 
        }
        else if ( total_marks >= 82 && total_marks <= 85 ){
            printf("Student %d : B+\n", student);
        }
        else if ( total_marks >= 78 && total_marks <= 81 ){
            printf("Student %d : B\n", student);
        } 
        else if ( total_marks >= 74 && total_marks <= 77 ){
            printf("Student %d : B-\n", student);
        }
        else if ( total_marks >= 70 && total_marks <= 73 ){
            printf("Student %d : C+\n", student);
        }
        else if ( total_marks >= 66 && total_marks <= 69 ){
            printf("Student %d : C\n", student);
        }
        else if ( total_marks >= 62 && total_marks <= 65 ){
            printf("Student %d : C-\n", student);
        }
        else if ( total_marks >= 58 && total_marks <= 61 ){
            printf("Student %d : D+\n", student);
        }
        else if ( total_marks >= 55 && total_marks <= 57 ){
            printf("Student %d : D\n", student);
        }
        else if ( total_marks >= 0 && total_marks <= 54 ){
            printf("Student %d : F\n", student);
        }

    }

    return 0;
}
