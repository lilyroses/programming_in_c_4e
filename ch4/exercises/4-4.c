/* Exercise 4-4.c - Generate and print a table of the first 10 factorials. */

#include <stdio.h>

int main (void)
{
    int i;
    int j;
    int f;

    printf  ("\n\nTABLE OF FIRST 10 FACTORIALS\n\n");

    printf  (" n         n!  \n");
    printf  ("---     -------\n");

    for ( i = 1; i <= 10; ++i ) {
        f = i;
        for ( j = i - 1; j >= 2; --j ) {
            f *= j;
        }
        printf  ("%2i     %7i\n", i, f);
    }

    printf("\n");
    
    return 0;
}