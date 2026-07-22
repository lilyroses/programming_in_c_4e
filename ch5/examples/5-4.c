/* Example 5-4.c - Program to determine if a number is even or odd (v.2) */

#include <stdio.h>

int main (void)
{
    int     num_to_test;
    int     remainder;

    printf ("\nEnter number: ");
    scanf  ("%i", &num_to_test);

    remainder = num_to_test % 2;

    if ( remainder == 0 ) {
        printf ("\n%i is even.\n", num_to_test);
    } else {
        printf ("\n%i is odd.\n", num_to_test);
    }
}