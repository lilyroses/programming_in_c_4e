// Example 6-4.c - Generating primes
#include <stdio.h>
#include <stdbool.h>


int main(void) {
    int i;
    int p;
    bool isPrime;
    
    int idx = 2;
    int primes[50];

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p = p+2) {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {
            if (p % primes[i] == 0) {
                isPrime = false;
            }
        }

        if (isPrime == true) {
            primes[idx] = p;
            ++idx;
        }
    }

    for (i = 0; i < idx; ++i) {
        printf("%i   ", primes[i]);
    }
    printf("\n");

    return 0;
}