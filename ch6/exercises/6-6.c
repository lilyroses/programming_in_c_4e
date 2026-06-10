// Exercise 6-6.c - Generate first 15 Fibonacci numbers
#include <stdio.h>


int main(void) {
    int i;
    int z;
    int x = 0;
    int y = 1;

    for (i = 2; i < 15; ++i) {
        z = x + y;
        printf("%i  ", z);
        x = y;
        y = z;
    }

    return 0;
}