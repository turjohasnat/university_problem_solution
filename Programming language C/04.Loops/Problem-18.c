//C Solution:
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int r_num = 0;
    int new_num = num;

    while ( num != 0 ){
        r_num = r_num * 10 + num % 10;
        num = num/10; 
    }
    if ( new_num == r_num ){
        printf("Yes\n");
    }
    else printf("No\n");

    return 0;

}