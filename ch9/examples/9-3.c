// Exampe 9-3.c - Concatenating character strings
#include <stdio.h>


void concat (const char str1[], const char str2[], char result[]);


/* functions */
    void concat (const char str1[], const char str2[], char result[]) {
    int i;
    int j;

    // copy str1 to result
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // copy str2 to result
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i+j] = str2[j];
    }

    // terminate the concatenated string with a null char
    result[i+j] = '\0';
}


int main(void) {
    const   char  s1[] = { "Test "};
    const   char  s2[] = { "works." };
    char    s3[20];

    concat(s1, s2, s3);

    printf("%s\n", s3);

    return 0;
}