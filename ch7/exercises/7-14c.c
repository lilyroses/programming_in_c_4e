/* Exercise 7-14c.c
*
* Rewrite of exercise 7-12.c to use global variables.
*/ 
#include <stdio.h>


/* globals */
int rows = 4;
int cols = 5;
int arr[4][5] = {
    { 1, 2, 3, 4, 5 },
    { 6, 7, 8, 9, 10 },
    { 11, 12, 13, 14, 15 },
    { 16, 17, 18, 19, 20 },
};
int arr2[5][4] = {};

/* functions*/
void transposeMatrix(void);
void displayMatrix(void);


/* transpose a matrix */
void transposeMatrix(void) {
    int i;
    int j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            arr2[j][i] = arr[i][j];
        }
    }
}


int main(void) {
    int i;
    int j;
    
    printf("\nMatrix 1:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%5i", arr[i][j]);
        }
        printf("\n");
    }
        
    transposeMatrix();
        
    printf("\nMatrix 2 (transposed):\n");
    for (i = 0; i < cols; ++i) {
        for (j = 0; j < rows; ++j) {
            printf("%5i", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}