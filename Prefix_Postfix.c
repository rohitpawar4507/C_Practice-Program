// Example : To demonstrate prefix and postfix modes

#include <stdio.h>
//stdio.h is a header file used for input.output purpose.

void main()
{
    //set a and b both equal to 5.
    int a=5, b=5;
    
    //Print them and decrementing each time.
    //Use postfix mode for a and prefix mode for b.
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
}

// in postfix operation -> first it will print then perform operation
// in prefix operation -> first perform operation then print
