// Example 9-2.c - Counting the characters in a string
#include <stdio.h>


int strLen(const char   str1[]);


int strLen(const char   str1[]) {
    int count;

    count = 0;
    while (str1[count] != '\0') {
        ++count;
    }
    return count;
}


int main(void) {
    const char  word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
    const char  word2[] = { 'a', 't', '\0' };
    const char  word3[] = { 'a', 'w', 'e', '\0' };

    printf("%i    %i    %i\n", strLen(word1), strLen(word2), strLen(word3));

    return 0;
}
