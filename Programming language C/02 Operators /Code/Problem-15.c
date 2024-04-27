//Task - Program to find size of int, float, double and char of the system.

//Sample Output:
// Size of int in byte(s) = 4
// Size of float in byte(s) = 4
// Size of double in byte(s) = 8
// Size of char in byte(s) = 1

//C Solution:
#include <stdio.h>

int main(){
    int intSize;
    float floatSize;
    double doubleSize;
    char charSize;
    printf("Size of int in byte(s):%d\n",sizeof(intSize));
    printf("Size of float in byte(s):%d\n",sizeof(floatSize));
    printf("Size of double in byte(s):%d\n",sizeof(doubleSize));
    printf("Size of char in byte(s):%d\n",sizeof(charSize));
    return 0;
}
