/* Example 2-5.c - Displaying Multiple Values */
#include <stdio.h>

int main (void)
{
    int value1;
    int value2;
    int sum;

    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    printf("\nThe sum of %i and %i is %i\n", value1, value2, sum);

    return 0;
}