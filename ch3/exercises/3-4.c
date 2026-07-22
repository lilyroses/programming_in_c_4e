/* Exercise 3-4.c - Convert Degrees Fahrenheit to Degrees Celsius
 * Use the following formula:
 *
 * C = (F - 32) / 1.8
 */

#include <stdio.h>

int main (void)
{
    int     F;
    float   C;

    F = 27;
    // F = 32;

    C = (F - 32) / 1.8;

    printf ("\n%i degrees F = %.2f degrees C\n", F, C);
}