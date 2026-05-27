#include <stdio.h>


int main(void) {

    int i;
    int ratingCounts[11];
    int response;

    for (i = 1; i <= 10; ++i) {
        ratingCounts[i] = 0;   
    }

    printf("\nEnter responses:\n");

    for (i = 0; i < 20; ++i) {
        scanf("%i", &response);
        ++ratingCounts[response];
    }

    printf("\n\n");
    printf("Rating    # of Responses\n");
    printf("------    --------------\n");
    
    for (i = 1; i <= 10; ++i) {
        printf("%8i%16i\n", i, ratingCounts[i]);
    }

    return 0;

}