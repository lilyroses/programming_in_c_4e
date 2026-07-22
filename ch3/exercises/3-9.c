/* Exercise 3-9.c - Using the following formula, write a program to find the
 * next largest even multiple for the following values of i and j:
 *
 *      FORMULA:
 * 
 *      (i + j) - (i % j)
 * 
 * 
 *      VALUES:
 * 
 *          i         j
 *      ------       ---
 *         365         7
 *      12,258        23
 *         996         4
 */

#include <stdio.h>

int main (void)
{
    int     i;
    int     j;
    int     next_multiple;

    i = 365;
    j = 7;
    next_multiple = (i + j) - (i % j);
    printf  ("\ni = %i, j = %i; next_multiple = %i\n", i, j, next_multiple);
    
    i = 12258;
    j = 23;
    next_multiple = (i + j) - (i % j);
    printf  ("\ni = %i, j = %i; next_multiple = %i\n", i, j, next_multiple);
    
    i = 996;
    j = 4;
    next_multiple = (i + j) - (i % j);
    printf  ("\ni = %i, j = %i; next_multiple = %i\n", i, j, next_multiple);

    return 0;
}