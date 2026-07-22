/* Example 4-7.c - Find the Greatest Common Divisor */

#include <stdio.h>

int main (void)
{
    int u;
    int v;
    int temp;

    printf  ("\nEnter 2 non-negative ints.\n");
    scanf   ("%i%i", &u, &v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf ("\nGCD is: %i\n", u);

    return 0;
}