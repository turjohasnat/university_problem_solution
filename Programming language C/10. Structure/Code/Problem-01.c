//C Solution:
#include<stdio.h>

struct student{
    char name[50];
    char studentId[15];
    float CGPA;
};

int main(){
    struct student students;
    gets(students.name);
    scanf("%s", students.studentId);
    scanf("%f", &students.CGPA);

    printf("\n");
    printf("Name: %s\n", students.name);
    printf("Student ID: %s\n", students.studentId);
    printf("CGPA: %.2f\n", students.CGPA);

    return 0;
}
