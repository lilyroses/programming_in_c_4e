/* Exercise 7-13.c
 * Modify the sort() function from Program 7.12 to take a third argument
 * indicating whether the array is to be sorted in ascending or descending
 * order. Then modify the sort() algorithm to correctly sort the array into
 * the indicated order.
 */
#include <stdio.h>

void sort(int a[], int n, int sortAsc) {
    int i;
    int j;
    int temp;

    for (i = 0; i < n-1; ++i) {
        for (j = i+1; j < n; ++j) {

            if (sortAsc == 1) {   
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            } else if (sortAsc == 0) {
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}


int main(void) {
    void sort(int a[], int n, int sortAsc);
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11 };

    // display array
    printf("\nThe array before sorting:\n");
    for (i = 0; i < 16; ++i) {
        printf("%i  ", array[i]);
    }
    printf("\n");

    // sort in ascending order
    sort(array, 16, 1);

    printf("\n\nThe array after sorting in ASCENDING order:\n");
    for (i = 0; i < 16; ++i) {
        printf("%i  ", array[i]);
    }
    printf("\n");

    // sort in descending order
    sort(array, 16, 0);
    
    printf("\n\nThe array after sorting in DESCENDING order:\n");
    for (i = 0; i < 16; ++i) {
        printf("%i  ", array[i]);
    }
    printf("\n");
    
    return 0;
}