/* Exercise 4-2.c - Generate and display a table of n and n^2 for int
 * values of n ranging from 1-10. Print appropriate column headings. */

#include <stdio.h>

int main (void)
{
    int n;

    printf  ("\n\nn^2 FOR n = 1-10\n\n");

    printf  (" n       n**2\n");
    printf  ("---      ----\n");
    
    for ( n = 1; n <= 10; ++n ) {
        printf  ("%2i      %3i\n", n, n*n);
    }

    printf  ("\n");

    return 0;
}