/* Exercise 3-8.c - To round off an integer to the next largest even multiple of
 * another number j, use the following formula:
 *
 *      next_multiple = (i + j) - (i % j)
 * 
 * E.g. to round off 256 days to the next largest number evenly divisible
 * by a week, values of i = 256 and j = 7 can be substituted into the
 * preceding formula as follows:
 * 
 *      next_multiple = (256 + 7) - (256 % 7)
 *      next_multiple =     263   -    4
 *      next_multiple =         259
 */

#include <stdio.h>

int main (void)
{
    int     i;  // the number to round up
    int     j;  // the number that i should be evenly divisible by
    int     next_multiple;

    i = 256;
    j = 7;

    next_multiple = (i + j) - (i % j);
    
    printf  ("\nRound 256 up to the next multiple of 7:\n");
    printf  ("(%i + %i) - (%i %% %i) = %i\n", i, j, i, j, next_multiple);

    return 0;
}