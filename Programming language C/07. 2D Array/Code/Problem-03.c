//C Solution:
#include<stdio.h>
int main(){
    int matrix[5][5];
    for ( int i = 0; i < 3; i++ ){
        for ( int j = 0; j < 3; j++ ){
            scanf("%d", &matrix[i][j] );
        }
    }
    int result = (matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])
                  -matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])
                  +matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]));
    printf("%d",result);
    return 0;
}