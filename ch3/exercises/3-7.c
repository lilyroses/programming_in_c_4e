/* Exercise 3-7.c - Write a program that evaluates the following expression
 * and displays the results in exponential format:
 *
 * ((3.31 x 10^-8) x (2.01 x 10^-7)) / ((7.16 x 10^-6) + (2.01 x 10^-8))
 */

#include <stdio.h>

int main (void)
{
    float res;

    res = ((3.31 * 10e-8) * (2.01 * 10e-7)) / ((7.16 * 10e-6) + (2.01 * 10e-8));

    printf("\nres = %.3e\n", res);

    return 0;
}