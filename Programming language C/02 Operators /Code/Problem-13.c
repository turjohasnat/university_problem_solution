//C Solution:
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter the value of x (1 <= x <= 180): ");
    scanf("%lf", &x);

    double x_radians= x * M_PI / 180.0;
    double result = 2 * pow(cos(x_radians), 2) - sqrt(3) * sin(x_radians) + log10(x / 2);
    printf("%lf\n", result);
    
    return 0;
}