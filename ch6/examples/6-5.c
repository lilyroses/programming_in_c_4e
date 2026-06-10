// Example 6-5.c - Initializing arrays
#include <stdio.h>


int main(void) {
    /* variables */
    int i;  
    int vals[10] = { 0, 1, 4, 9, 16 };  // doesn't have 10 values yet

    for (i = 5; i < 10; ++i) {
        vals[i] = i * i;
    }
    
    for (i = 0; i < 10; ++i) {
        printf("vals[%i] = %i\n", i, vals[i]);
    }
    
    return 0;
}