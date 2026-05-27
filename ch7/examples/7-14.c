// 7-14.c - multidimensional var-length arrays
#include <stdio.h>

int main(void) {
    void scalarMultiply(int nRows, int nCols,
                        int matrix[nRows][nCols],
                        int scalar);
    void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
    int sampleMatrix[3][5] = {
        {  7, 16, 55, 13, 12 },
        { 12, 10, 52,  0,  7 },
        { -2,  1,  2,  4,  9 }
    };

    printf("\nOriginal matrix:\n");
    displayMatrix(3, 5, sampleMatrix);

    scalarMultiply(3, 5, sampleMatrix, 2);
    printf("\nMultiplied by 2:\n");
    displayMatrix(3, 5, sampleMatrix);

    scalarMultiply(3, 5, sampleMatrix, -1);
    printf("\nThen multiplied by -1:\n");
    displayMatrix(3, 5, sampleMatrix);

    printf("\n");

    return 0;
}

// function to multiply a matrix by a scalar
void scalarMultiply(int nRows,
                    int nCols,
                    int matrix[nRows][nCols],
                    int scalar) {
    int row;
    int col;

    for (row = 0; row < nRows; ++row) {
        for (col = 0; col < nCols; ++col) {
            matrix[row][col] *= scalar;
        }
    }
}

// function to multiply a matrix by a scalar
void displayMatrix(int nRows, int nCols,
                    int matrix[nRows][nCols]) {
    int row;
    int col;

    for (row = 0; row < nRows; ++row) {
        for (col = 0; col < nCols; ++col) {
            printf("%5i", matrix[row][col]);
        }
        printf("\n");
    }
}
