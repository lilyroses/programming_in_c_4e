/* Exercise 7-14a.c
 * 
 * Rewrite of exercise 7-10.c to use global variables.
 */
#include <stdio.h>

int x = 3;

_Bool prime(void);


/* functions */
_Bool prime(void) {
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
    int i;
    _Bool is_prime;

    is_prime = prime();
    if (is_prime == 0) {
        printf("\n%i is not a prime number\n", x);
    } else if (is_prime == 1) {
        printf("\n%i is a prime number\n", x);
    }

    return 0;
}