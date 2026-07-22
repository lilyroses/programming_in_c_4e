/* Example 4-3.c - Generate a Table of Triangular Numbers */

#include <stdio.h>

int main (void)
{
    int n;
    int triangularNum;

    printf ("\n");
    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNum = 0;
    for ( n = 1; n <= 10; ++n ) {
        triangularNum += n;
        printf ("%2i       %i\n", n, triangularNum);
    }

    return 0;
}