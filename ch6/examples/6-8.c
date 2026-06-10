/* Example 6-8.c
 * Generate Fibonacci numbers using variable length arrays
 */
#include <stdio.h>


int main(void) {
    int i;
    int numVals;
    
    unsigned long long int Fibonacci[numVals];
    
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;


    printf("\nLength of Fibonacci sequence (1-75): ");
    scanf("%i", &numVals);

    if (numVals < 1 || numVals > 75) {
        printf("Error: length out of range\n");
        return 1;
    }

    for (i = 2; i < numVals; ++i) {
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }

    for (i = 0; i < numVals; ++i) {
        printf("%llu   ", Fibonacci[i]);
    }
    printf("\n");

    return 0;
}