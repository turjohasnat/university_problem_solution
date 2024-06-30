//C Solution:
#include <stdio.h>

int main(){
    int angle1,angle2,angle3;
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    int triangle = angle1 + angle2 + angle3;
    if (triangle == 180){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}