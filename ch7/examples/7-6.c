/* 
 * 7-6.c
 * Function to find GCD of two nonnegative integer values
 * and return the result
 */
#include <stdio.h>


int gcd(int x, int y) {
    int temp;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}

int main(void) {
    int result;

    result = gcd(150, 35);
    printf("The GCD of 150 and 35 is: %i\n", result);

    result = gcd(1026, 405);
    printf("The GCD of 1026 and 405 is: %i\n", result);

    printf("The GCD of 83 and 240 is: %i\n", gcd(83, 240));

    return 0;
}