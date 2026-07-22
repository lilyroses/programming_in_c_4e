/* Exercise 2-4.c - Subtract 15 from 87 and print the result with
 * an appropriate message. */
#include <stdio.h>

int main (void)
{
    int val1 = 87;
    int val2 = 15;
    int result = val1 - val2;

    printf ("\n%i - %i = %i\n", val1, val2, result);

    return 0;
}