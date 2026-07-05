// Example 9-5.c - Program to illustrate the %s scanf format chars
#include <stdio.h>


int main(void) {
    char    s1[81];
    char    s2[81];
    char    s3[81];

    printf("\nEnter 3 lines of text:\n");
    scanf("%s%s%s", s1, s2, s3);

    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);

    return 0;
}