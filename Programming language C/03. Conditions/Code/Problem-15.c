//C Solution:
#include<stdio.h>

int main(){
    int player1;
    printf("Player-1 pick a number:");
    scanf("%d", &player1);

    int chance1;
    printf("Player-2 guess the number:");
    scanf("%d", &chance1);
    if (player1 == chance1){
        printf("Right, Player-2 wins!\n");
    }
    else {
        printf("Wrong, 2 Chance(s) Left!\n");

        int chance2;
        printf("Player-2 guess the number 2nd time:");
        scanf("%d", &chance2);
        if (player1 == chance2){
            printf("Right, Player-2 wins!\n");
        }
        else{
            printf("Wrong, 1 Chance(s) Left!\n");

            int chance3;
            printf("Player-2 guess the number 3rd time:");
            scanf("%d", &chance3);
            if (player1 == chance3){
                printf("Right, Player-2 wins!\n");
            }
            else{
                printf("Wrong, 0 Chance(s) Left!\nPlayer-1 wins!\n");   
            }
        }
    }
    return 0;
}
