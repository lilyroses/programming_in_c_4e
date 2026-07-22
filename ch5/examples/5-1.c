/* Example 5-1.c - Calculate the Absolute Value of an Int */

#include <stdio.h>

int main (void)
{
    int     num;
    int     absVal;

    printf  ("\nEnter number :");
    scanf   ("%i", &num);

    absVal = num;
    if ( num < 0 ) {
        absVal = -num;
    }

    printf  ("\nAbsolute value of %i: %i\n", num, absVal);

    return 0;
}