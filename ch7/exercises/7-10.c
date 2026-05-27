/* Exercise 7-10.c
 * Write a function prime() that returns 1 if its argument is a prime number
 * and returns 0 otherwise.
 */
#include <stdio.h>


_Bool prime(int);


/* functions */
_Bool prime(int x) {
    int i;

    if (x < 3) {
        return 0;
    } else if (x % 2 == 0) {
        return 0;
    } else {
        for (i = 3; i < x - 1; i += 2) {
            if (x % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}


int main(void) {
    int x;
    int i;
    _Bool is_prime;

    x = 4;
    is_prime = prime(x);
    if (is_prime == 0) {
        printf("\n%i is not a prime number\n", x);
    } else if (is_prime == 1) {
        printf("\n%i is a prime number\n", x);
    }

    return 0;
}