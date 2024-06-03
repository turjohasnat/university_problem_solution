//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int num, root;
    printf("Enter your number:");
    scanf("%d",&num);

    root = sqrt(num);
    if (pow(root,2) == num ){
        printf ("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
