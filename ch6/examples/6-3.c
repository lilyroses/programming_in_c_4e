// Example 6-3.c - Generate first 15 Fibonacci numbers
#include <stdio.h>


int main(void) {
    int i;
    int Fibonacci[15];  // an array declaration

    Fibonacci[0] = 0;  // defining the first item in the array
    Fibonacci[1] = 1;  // defining the first item in the array

    for (i = 2; i < 15; ++i) {
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }
    
    for (i = 0; i < 15; ++i) {
        printf("%i\n", Fibonacci[i]);
    }

    return 0;
}