//C Solution:
#include<stdio.h>

void recursionNum( int n );

int main(){
    int n = 1;
    printf("The natural numbers are : ");
    recursionNum(n);
    return 0;
}

void recursionNum( int n ){
   if( n > 50 ){
      return;
   }
   printf("%d ", n);
   recursionNum( n + 1 );
}
