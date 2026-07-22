/* Example 4-2.c - Calculating the 200th Triangular Number */

#include <stdio.h>

int main (void)
{
    int n;
    int triangularNum;

    triangularNum = 0;

    for ( n = 1; n <= 200; n = n + 1 ) {
        triangularNum = triangularNum + n;
    }

    printf ("\nThe 200th triangular number is %i\n", triangularNum);

    return 0;
}