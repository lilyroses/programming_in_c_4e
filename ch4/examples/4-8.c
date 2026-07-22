/* Example 4-8.c - Reverse Digits of a Number */

#include <stdio.h>

int main (void)
{
    int n;
    int rDigit;

    printf  ("\nEnter number: ");
    scanf   ("%i", &n);

    while ( n != 0 ) {
        rDigit = n % 10;
        printf ("%i", rDigit);
        n = n / 10;
    }

    printf ("\n");

    return 0;
}