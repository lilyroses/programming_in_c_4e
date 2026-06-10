/* Exercise 6-2.c
 * Modify example 6-1.c so that the elements of the values array are
 * initialized to 0. Use a for loop to perform the initialization. */
#include <stdio.h>


int main(void) {
    int index;
    int values[10];

    for (index = 0; index < 10; ++index) {
        values[index] = 0;
    }
    
    for (index = 0; index < 10; ++index) {
        printf("%i  ", values[index]);
    }
    printf("\n");
}