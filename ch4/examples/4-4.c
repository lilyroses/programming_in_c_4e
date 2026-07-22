/* Example 4-4.c - Prompt User for Input */

#include <stdio.h>

int main (void)
{
    int n;
    int num;
    int triangularNum;

    printf  ("\nWhat triangular number do you want? ");
    scanf   ("%i", &num);

    triangularNum = 0;

    for ( n = 1; n <= num; ++n ) {
        triangularNum += n;
    }

    printf ("\nTriangular number %i is %i\n", num, triangularNum);

    return 0;
}