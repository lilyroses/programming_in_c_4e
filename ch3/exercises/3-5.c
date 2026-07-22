/* Exercise 3-5.c - What output would you expect from the following program? */

#include <stdio.h>

int main (void)
{
    char c, d;

    c = 'd';
    d = c;

    // EXPECTED OUTPUT
    printf  ("\nEXPECTED OUTPUT:\n");
    printf  ("d = d\n");

    // ACTUAL OUTPUT
    printf  ("\nACTUAL OUTPUT:\n");
    printf  ("d = %c\n", d);

    return 0;
}