/* Example 4-9.c - Revised Program to Reverse Digits of a Number */

#include <stdio.h>

int main (void)
{
    int n;
    int rDigit;

    printf  ("\nEnter number: ");
    scanf   ("%i", &n);

    do {
        rDigit = n % 10;
        printf  ("%i", rDigit);
        n = n / 10;
    }
    while ( n != 0 );

    printf ("\n");

    return 0;
}