/* Exercise 7-10.c
 * Write a function prime() that returns 1 if its argument is a prime number
 * and returns 0 otherwise.
 */
#include <stdio.h>


double absValue(double x);
double squareRoot(double n);
_Bool prime(int x);


// get absolute value of a number
double absValue(double x) {
    if (x < 0)
        x = -x;
    return x;
}


// compute square root of number
double squareRoot(double x) {
    const double epsilon = 0.0001;
    double guess = 1.0;
    while (absValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }
    return guess;
}


// determine if number is prime
_Bool prime(int x) {
    _Bool is_prime = 1;
    double sqRoot;
    int i;

    if (x < 2) {
        is_prime = 0;
        return is_prime;
    } else if (x == 2 || x == 3) {
        is_prime = 1;
        return is_prime;
    } else if (x > 3) {
        sqRoot = squareRoot((double) x);
        for (i = 0; i < (int) sqRoot; ++i) {
            printf("\ni = %i\n", i);
            if (x % i == 0) {
                is_prime = 0;
                return is_prime;
            }
        }
    }
    return is_prime;
}


int main(void) {
    double absValue(double);
    double squareRoot(double);
    _Bool prime(int);

    int x;
    _Bool is_prime;

    is_prime = prime(29);
    printf("\n%i: %c\n", x, is_prime);
    return 0;
}