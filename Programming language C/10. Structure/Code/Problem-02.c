//C Solution:
#include<stdio.h>

struct student{
    char name[100];
    char studentId[50];
    float CGPA;
};

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    struct student students[n];
    for( int i = 1; i <= n; i++ ){
        fgets(students[i].name, 100, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        scanf("%s", students[i].studentId);
        scanf("%f", &students[i].CGPA);
        getchar();
    }

    for( int i = 1; i <= n; i++ ){
        printf("\n");
        printf("Student %d: %s\n", i, students[i].name);
        printf("Student ID: %s\n", students[i].studentId);
        printf("CGPA: %.2f\n\n", students[i].CGPA);
    }

    return 0;
}
