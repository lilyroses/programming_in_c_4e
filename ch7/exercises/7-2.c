/*
 * Modify example 7-4.c so the value of triangularNum is returned by the
 * function. Then go back to 7-5.c and change it so that it calls the new
 * version of the calculateTriangularNum() function.
 */
#include <stdio.h>


int calculateTriangularNum(int n) {
    int i;
    int triangularNum = 0;

    for (i = 1; i <= n; ++i) {
        triangularNum += i;
    }

    return triangularNum;
}


int main(void) {
    int counter;
    int num;
    int userTriangularNum;
    int calculateTriangularNum(int n);

    for (counter = 0; counter <= 3; ++counter) {
        printf("\nEnter number: ");
        scanf("%i", &num);

        userTriangularNum = calculateTriangularNum(num);

        printf("Triangular number [%i] is: [%i]\n", num, userTriangularNum);
    }

    return 0;
}