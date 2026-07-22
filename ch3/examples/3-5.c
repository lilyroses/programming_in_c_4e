/* Example 3-5.c - Converting Between ints And floats */

#include <stdio.h>

int main (void)
{
    float   f1 = 123.125, f2;
    int     i1, i2 = -150;
    char    c = 'a';

    i1 = f1;                    // float to int conversion
    printf ("\n%f assigned to an int produces %i\n", f1, i1);

    f1 = i2;                    // int to float conversion
    printf ("\n%i assigned to a float produces %f\n", i2, f1);

    f1 = i2 / 100;              // int divided by int
    printf ("\n%i divided by 100 produces %f\n", i2, f1);

    f2 = i2 / 100.0;            // int divided by float
    printf ("\n%i divided by 100.0 produces %f\n", i2, f2);

    f2 = (float) i2 / 100;      // type cast operator
    printf ("\n(float) %i divided by 100 produces %f\n", i2, f2);

    return 0;
}