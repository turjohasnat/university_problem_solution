//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int frist_number = 1, second_number = 1;
    printf("%d,%d", frist_number, second_number); 
    for ( int i = 3; i <= n; i++ ){
        int next_number = frist_number + second_number;
        printf(",%d", next_number);
        frist_number = second_number;
        second_number = next_number;
    }
    return 0;
}