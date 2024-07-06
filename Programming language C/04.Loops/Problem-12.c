//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int first_num = 1, second_num = 1;
    printf("%d,%d", first_num, second_num );
    for ( int i = 3; i <= n; i++){
        int next_num = first_num + second_num;
        printf(",%d", next_num);
        first_num = second_num;
        second_num = next_num;
    }
    return 0;
}
