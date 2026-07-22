/* Exercise 4-7.c - A decimal point before a field width specification in a
 * printf() statement has a special purpose. Discern its meaning by running
 * the following program.
 */

#include <stdio.h>

int main (void)
{
    int     dollars;
    int     cents;
    int     count;

    for ( count = 1; count <= 10; ++count ) {
        printf  ("\nEnter dollars: ");
        scanf   ("%i", &dollars);
        printf  ("Enter cents: ");
        scanf   ("%i", &cents);

        // The decimal number in the width format code specifies
        // how many decimal places to display.
        printf  ("$%i.%.2i\n\n", dollars, cents);
    }

    return 0;
}