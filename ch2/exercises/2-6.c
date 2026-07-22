/* Exercise 2-6.c - What output might you expect from the following program? */

#include <stdio.h>

int main (void)
{
    int answer, result;

    answer = 100;
    result = answer - 10;

    printf ("\nPROGRAM OUTPUT:\n");
    printf ("The result is %i\n", result + 5);

    printf ("\n\nEXPECTED OUTPUT:\n");
    printf ("The result is 95\n");

    return 0;
}