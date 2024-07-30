//C Solution:
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int r_num = 0;
    while ( num != 0 ){
        r_num = r_num*10 + num % 10;
        num = num / 10;
    }
    printf("%d", r_num);
    return 0;
}