/* Example 5-5.c - Determine if year is a leap year */

#include <stdio.h>

int main (void)
{
    int     year;
    int     rem_4;
    int     rem_100;
    int     rem_400;

    printf ("\nEnter year: ");
    scanf  ("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ( (rem_4 == 0 && rem_100 != 0)   ||  rem_400 == 0 ) {
        printf ("\n%i is a leap year.\n", year);
    } else {
        printf ("\n%i is not a leap year.\n", year);
    }

    return 0;
}