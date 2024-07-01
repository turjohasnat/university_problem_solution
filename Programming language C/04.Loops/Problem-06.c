//C Solution:
#include<stdio.h>

int main(){
    int player1, player2, n;

    scanf("%d", &player1);
    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ){
        scanf("%d", &player2);
        if ( player1 == player2 ){
            printf("Right, Player-2 wins!\n");
            break;
        }
        else {
            printf("Wrong, %d Choice(s) Left!\n", n-i-1);
        }        
    }

    if (!( player1 == player2 )) {
        printf("Player-1 wins!\n"); 
    }
    
    return 0;
}