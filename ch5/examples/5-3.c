/* Example 5-3.c - Program to determine if number is even or odd */

#include <stdio.h>

int main (void)
{
    int     num_to_test;
    int     remainder;

    printf ("\nEnter your number to be tested: ");
    scanf  ("%i", &num_to_test);

    remainder = num_to_test % 2;

    if ( remainder == 0 ) {
        printf ("\n%i is even.\n", num_to_test);
    }

    if ( remainder != 0 ) {
        printf ("\n%i is odd.\n", num_to_test);
    }

    return 0;
}