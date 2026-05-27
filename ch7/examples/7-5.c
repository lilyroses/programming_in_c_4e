/*
 * 7-5.c
 * Function to find the GCD of two nonnegative integers
*/
#include <stdio.h>


void gcd(int x, int y) {
    int temp;

    printf("The GCD of %i and %i is: ", x, y);

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("%i\n", x);
}

int main(void) {
    gcd(150, 35);
    gcd(1026, 405);
    gcd(83, 240);

    return 0;
}