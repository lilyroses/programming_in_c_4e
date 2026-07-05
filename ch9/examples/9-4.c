// Example 9-4.c - Function to test if two strings are equal
#include <stdio.h>
#include <stdbool.h>


/* globals */
bool strsAreEqual(const char s1[], const char s2[]);


/* functions */
bool strsAreEqual(const char s1[], const char s2[]) {
    int i;
    bool areEqual;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        areEqual = true;
    } else {
        areEqual = false;
    }

    return areEqual;
}


int main(void) {
    const char  stra[] = "string compare test";
    const char  strb[] = "string";

    printf("%i\n", strsAreEqual(stra, strb));
    printf("%i\n", strsAreEqual(stra, stra));
    printf("%i\n", strsAreEqual(strb, "string"));

    return 0;
}