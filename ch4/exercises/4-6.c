/* Exercise 4-6.c - A minus sign placed in front of a field width specification
 * causes the field to be displayed left-justified. Substitute the following
 * printf() statement for the corresponding statement in Example 4-3.c, then
 * run both programs and compare the ouput.
 * 
 * ORIGINAL STATEMENT:
 *      printf ("%2i       %i\n", n, triangularNum);
 *   
 * NEW STATEMENT:
 *      printf ("%-2i       %i\n", n, triangularNum);
 */

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
        printf ("%-2i       %i\n", n, triangularNum);
    }

    return 0;
}