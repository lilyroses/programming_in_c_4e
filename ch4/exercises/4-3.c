/* Exercise 4-3.c - Generate a table of every 5th triangular number between 
 * 5-50 using the formula (n * (n + 1) / 2). */

#include <stdio.h>

int main (void)
{
    int n;
    int tn;

    printf  ("\n\nEVERY 5th TRIANGULAR NUMBER BETWEEN 5-50\n\n");

    printf  (" n       triangular n\n");
    printf  ("---      ------------\n");

    for ( n = 5; n <= 50; n += 5 ) {
        tn = (n * (n + 1)) / 2;
        printf  ("%2i        %6i\n", n, tn);
    }

    printf  ("\n");

    return 0;
}