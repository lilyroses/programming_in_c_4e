/* Example 4-5.c - Using Nested for Loops */

#include <stdio.h>

int main (void)
{
    int n;
    int num;
    int triangularNum;
    int i;

    for ( i = 1; i <= 5; ++i ) {
        printf  ("\nEnter triangular number: ");
        scanf   ("%i", &num);

        triangularNum = 0;

        for ( n = 1; n <= num; ++n ) {
            triangularNum += n;
        }

        printf ("\nTriangular number %i is %i\n", num, triangularNum);
    }

    return 0;
}