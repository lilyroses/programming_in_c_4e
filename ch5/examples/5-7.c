/* Example 5-7.c - Program to categorize a single character that is entered
 * at the terminal.
 */

#include <stdio.h>

int main (void)
{
    char    c;

    printf ("\nEnter a character: ");
    scanf  ("%c", &c);

    if ( (c >= 'a'  &&  c <= 'z')   ||  (c >= 'A' && c <= 'Z') ) {
        printf ("\n%c is an alphabetic character.\n", c);
    } else if ( c >= '0' && c <= '9' ) {
        printf ("\n%c is a digit.\n", c);
    } else {
        printf ("\n%c is a special character.\n", c);
    }

    return 0;
}