/* Exercise 7-7.c
 * Program that raises an integer to a positive integer power, with function
 * x_to_the_n(), which takes two integer arguments, x and n. The function
 * should return a long int after calculating x**n.
 */
#include <stdio.h>


long int x_to_the_n(int, int);


// calculate x**n
long int x_to_the_n(int x, int n) {
    int i;
    long int ans;

    ans = 1;
    for (i = 0; i < n; ++i) {
        ans *= x;
    }

    return ans;
}


int main(void) {
    int x;
    int n;
    long int result;

    x = 12;
    n = 2;
    result = x_to_the_n(x, n);
    printf("\nResult of %i**%i: %li\n\n", x, n, result);

    return 0;
}