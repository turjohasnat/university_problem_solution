//Task - Program that will declare a variable from each data type: double, boolean. Then it will initialize them with values and print them.

//Sample output:
//The double value: 3.140000e+00
//The boolean value: 1
//The double value: 1.618039
//The boolean value: 0

//C Solution:
#include <stdio.h>
#include <stdbool.h>

int main(){
    double doubleNumber;
    doubleNumber = 3.140000e+00;
    printf("The double value:%e\n",doubleNumber);

    bool booleanValue;
    booleanValue = true;
    printf("The boolean value:%d\n\n",booleanValue);

    double double_Number;
    double_Number = 1.618039;
    printf("The double value:%lf\n",double_Number);

    bool boolean_Value;
    boolean_Value = false;
    printf("The boolean value:%d\n\n",boolean_Value);

    return 0;
}
