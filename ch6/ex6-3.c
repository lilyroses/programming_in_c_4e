#include <stdio.h>


int main(void) {

    int i;
    int ratingCounts[11];
    int response;

    for (i = 1; i <= 10; ++i) {
        ratingCounts[i] = 0;   
    }

    // printf("\nEnter responses:\n");
    
    // for (i = 0; i < 20; ++i) {
    //     scanf("%i", &response);
    //     if (response < 1 || response > 10) {
    //         printf("Bad response: %i\n", response);
    //     } else {
    //         ++ratingCounts[response];
    //     }
    // }
    
    /* CHANGE SO THAT AN ARBITRARY NUMBER OF RESPONSES
        MAY BE ENTERED */
    
    printf("\nEnter responses (999 to quit):\n");

    response = 0;

    while (response != 999) {

        if (response == 999) {
            break;
        }
        else if (response < 1 || response > 10) {
            printf("Bad response: %i\n", response);
        }
        else {
            ++ratingCounts[response];
        }
    }

    printf("\n\n");
    printf("Rating    # of Responses\n");
    printf("------    --------------\n");
    
    
    for (i = 1; i <= 10; ++i) {
        printf("%4i%14i\n", i, ratingCounts[i]);
    }

    return 0;

}