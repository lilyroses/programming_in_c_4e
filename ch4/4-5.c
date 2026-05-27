#include <stdio.h>

int main(void) {
    int n;
    int num;
    int triangularNum;
    int counter;

    for (counter = 1; counter <= 5; ++counter) {
        printf("\nEnter number: ");
        scanf("%i", &num);

        triangularNum = 0;

        for (n = 1; n <= num; ++n) {
            triangularNum += n;
        }

        printf("\nTriangular number of [%i] is: [%i]\n\n", num, triangularNum);
    }

    return 0;
}