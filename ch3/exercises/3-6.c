/* Exercise 3-6.c - Write a program to evaluate the following polynomial: 
 *
 *      3x^3 - 5x^2 + 6
 * 
 * for x = 2.55.
 */

#include <stdio.h>

int main (void)
{
    float   x;
    float   ans;

    x = 2.55;

    ans = (3 * (x * x * x)) - (5 * (x * x)) + 6;

    printf  ("\n3x^3 - 5x^2 + 6 [x = 2.55] : %.2f\n", ans);

    return 0;
}