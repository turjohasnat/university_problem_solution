//C Solution:
#include<stdio.h>
#include<math.h>

struct point{
    float x;
    float y;
};

int main(){
    struct point p1, p2;

    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    float distance = sqrt( pow ( p2.x - p1.x, 2 ) + pow ( p2.y - p1.y, 2 ) );
    printf("The distance is %.2f unit\n", distance );

    return 0;
}
