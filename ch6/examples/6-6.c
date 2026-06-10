// Example 6-6.c - Character arrays
#include <stdio.h>


int main(void) {
    int i;
    char word[] = { '\n', 'H', 'e', 'l', 'l', 'o', '!' };

    for (i = 0; i < 7; ++i) {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}