/* Example 2-6.c - Using Comments in a Program */
#include <stdio.h>

int main (void)
{
    // Declare variables
    int val1;
    int val2;
    int sum;

    // Assign values and calculate sum
    val1 = 50;
    val2 = 25;
    sum = val1 + val2;

    // Display result
    printf("\nSum of %i and %i is %i\n", val1, val2, sum);

    return 0;
}