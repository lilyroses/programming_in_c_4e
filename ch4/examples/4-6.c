/* Example 4-6.c - Introducing the while Statement */
#include <stdio.h>

int main (void)
{
    int count = 1;

    while ( count <= 5 ) {
        printf ("%i\n", count);
        ++count;
    }

    return 0;
}