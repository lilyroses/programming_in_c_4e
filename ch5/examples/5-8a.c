/* Example 5-8a.c - Program to evaluate simple expressions of the form
 *      number      operator        number
 */

#include <stdio.h>

int main (void)
{
    float   val1;
    float   val2;

    char    op;

    printf ("\nType in your expression.\n");
    scanf  ("%f  %c  %f", &val1, &op, &val2);

    if ( op == '+' ) {
        printf ("\n%.2f\n", val1 + val2);
    } else if ( op == '-' ) {
        printf ("\n%.2f\n", val1 - val2);
    } else if ( op == '*' ) {
        printf ("\n%.2f\n", val1 * val2);
    } else if ( op == '/' ) {
        printf ("\n%.2f\n", val1 / val2);
    }

    return 0;
}