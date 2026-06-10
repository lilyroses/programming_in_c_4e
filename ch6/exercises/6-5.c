// Exercise 6-5.c - What output do you expect from the following program?

/*
#include <stdio.h>
int main (void) {
    int i,
    int j;
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    for ( j = 0; j < 10; ++j ) {
        for ( i = 0; i < j; ++i ) {
            numbers[j] += numbers[i];
        }
    }

    for ( j = 0; j < 10; ++j ) {
        printf ("%i ", numbers[j]);
    }
    printf ("\n");

    return 0;
}

*/

/* I think it produces a Fibonacci sequence. */

/* It actually produces a sequence of numbers that is 2**n where: 
 * n = 0, n <= 8, n++
 */

#include <stdio.h>
int main (void) {
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i, j;
    for ( j = 0; j < 10; ++j )
        for ( i = 0; i < j; ++i )
            numbers[j] += numbers[i];
    for ( j = 0; j < 10; ++j )
        printf ("%i ", numbers[j]);
    printf ("\n");
    return 0;
}
