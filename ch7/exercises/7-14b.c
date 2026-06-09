/* Exercise 7-14b.c
 *
 * Rewrite of exercise 7-11.c to use global variables.
 */ 
#include <stdio.h>

/* globals */
int n = 5;
int array[5] = {6, 2, 8, 4, 5};

/* functions */
int arraySum(void);


/* sum the array defined at the global level. */
int arraySum(void) {
    int sum;
    int i;

    sum = 0;
    for (i = 0; i < n; ++i) {
        sum += array[i];
    }

    return sum;
}


int main(void) {
    int sum;
    int i;

    sum = arraySum();

    printf("\nArray: [");
    for (i = 0; i < n; ++i) {
        printf("%5i", array[i]);
    }
    printf("   ]\n");

    printf("\nSum of array is %i\n", sum);
}