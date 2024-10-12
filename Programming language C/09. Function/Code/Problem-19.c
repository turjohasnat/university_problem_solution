//C Solution:
#include<stdio.h>

void InputMatrix( int a, int b, int c[a][b] );
void ShowMatrix( int a, int b, int c[a][b] );
void ScalarMultiply( int a, int b, int c[a][b], int scalar );

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c[a][b];
    InputMatrix( a, b, c );
    
    int scalar;
    scanf("%d", &scalar);
    printf("\n");
    printf("Original:\n");
    ShowMatrix( a, b, c );

    ScalarMultiply( a, b, c, scalar );
    printf("\n");
    printf("Multiplied by %d:\n", scalar);
    ShowMatrix(a, b, c);

    return 0;
}

void InputMatrix( int a, int b, int c[a][b] ){
    for( int i = 0; i < a; i++ ){
        for( int j = 0; j < b; j++ ){
            scanf("%d", &c[i][j]);
        }
    }
}

void ShowMatrix( int a, int b, int c[a][b] ){
    for( int i = 0; i < a; i++ ){
        for( int j = 0; j < b; j++ ){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply( int a, int b, int c[a][b], int scalar ){
    for( int i = 0; i < a; i++ ){
        for( int j = 0; j < b; j++ ){
            c[i][j] *= scalar;
        }
    }
}
