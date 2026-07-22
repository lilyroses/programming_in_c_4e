/* Exercise 4-8.c - Example 4-5.c allows the user to type in only 5 different
 * numbers.  Modify the program so that the user can type in the number of 
 * triangular numbers to be calculated.
 */

#include <stdio.h>

int main (void)
{
    int entries;        // number of triangular numbers to calculate
    int n;              // iterate through values up to num
    int num;            // the number to triangulate
    int triangularNum;  // the triangulated number
    int i;

    printf  ("\nEnter the number of triangular numbers to calculate: ");
    scanf   ("%i", &entries);

    for ( i = 1; i <= entries; ++i ) {
        printf  ("\nTRIANGULAR #%i: ", i);
        scanf   ("%i", &num);
        
        triangularNum = 0;
        for ( n = 1; n <= num; ++n ) {
            triangularNum += n;
        }
        printf ("Triangular number %i is %i\n", num, triangularNum);
    }

    return 0;
}