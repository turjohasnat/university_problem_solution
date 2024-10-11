//C Solution:
#include<stdio.h>

void InputMatrix( int a[3][5] );
void ShowMatrix( int a[3][5] );
void ScalarMultiply( int a[3][5], int scalar );

int main(){
    int a[3][5];
    int scalar;
    scanf("%d", &scalar);

    InputMatrix(a);

    printf("\n\n");
    printf("Original:\n");
    ShowMatrix(a);

    printf("\n");
    printf("Multiplied by %d:\n",scalar);
    ScalarMultiply( a, scalar );
    return 0;
}

void InputMatrix( int a[3][5] ){
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 5; j++ ){
            scanf("%d", &a[i][j]);
        }
    }
}

void ShowMatrix( int a[3][5] ){
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 5; j++ ){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply( int a[3][5], int scalar ){
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 5; j++ ){
            printf("%d ", a[i][j] * scalar );
        }
        printf("\n");
    }
}
