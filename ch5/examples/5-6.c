/* Example 5-6.c - Implementing the Sign Function */

#include <stdio.h>

int main (void)
{
    int     num;
    int     sign;

    printf ("\nEnter number: ");
    scanf  ("%i", &num);

    if ( num < 0 ) {
        sign = -1;
    } else if ( num == 0 ) {
        sign = 0;
    } else {
        sign = 1;
    }

    printf ("\nSign of %i is %i\n", num, sign);

    return 0;
}