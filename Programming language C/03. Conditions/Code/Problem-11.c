//C Solution:
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num >= 90 && num <= 100 ){
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
    else if (num >= 0 && num <= 54 ){
        printf("Grade: F");
    }

    return 0;
}