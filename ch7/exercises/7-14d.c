/* Exercise 7-14d.c
*
* Rewrite of exercise 7-13.c to use global variables.
*/
#include <stdio.h>


/* globals */
int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                  44, -3, -9, 12, 17, 22, 6, 11 };
int n = 16;
int sortAsc = 1;


void sort(void) {
    int i;
    int j;
    int temp;

    for (i = 0; i < n-1; ++i) {
        for (j = i+1; j < n; ++j) {

            if (sortAsc == 1) {   
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            } else if (sortAsc == 0) {
                if (array[i] < array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
}


int main(void) {
    void sort(void);
    int i;

    
    // display array
    printf("\nThe array before sorting:\n");
    for (i = 0; i < 16; ++i) {
        printf("%i  ", array[i]);
    }
    printf("\n");
    
    // sort in ascending order
    // sortAsc already equals 1 at global level
    sort();

    printf("\n\nThe array after sorting in ASCENDING order:\n");
    for (i = 0; i < 16; ++i) {
        printf("%i  ", array[i]);
    }
    printf("\n");

    // sort in descending order
    sortAsc = 0;  // change sortAsc as it equals 1 on initialization
    sort();
    
    printf("\n\nThe array after sorting in DESCENDING order:\n");
    for (i = 0; i < 16; ++i) {
        printf("%i  ", array[i]);
    }
    printf("\n");
    
    return 0;
}