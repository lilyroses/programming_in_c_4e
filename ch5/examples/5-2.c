/* Example 5-2.c - Calculate average of a set of grades and count the number
 * of failing test grades. */

#include <stdio.h>

int main (void)
{
    int     numGrades;
    int     i;
    int     grade;
    int     gradeTotal;
    int     failureCount;
    
    float   avg;
    float   percentFailed;
    
    printf  ("\nEnter number of grades: ");
    scanf   ("%i", &numGrades);
    
    gradeTotal = 0;
    failureCount = 0;
    
    for ( i = 1; i <= numGrades; ++i ) {
        printf ("Enter grade #%i: ", i);
        scanf ("%i", &grade);

        gradeTotal += grade;
    
        if ( grade < 65 ) {
            ++failureCount;
        }
    }

    avg = (float) gradeTotal / numGrades;
    percentFailed = (float) failureCount / numGrades * 100;

    printf ("\nGrade average: %.2f\n", avg);
    printf ("Number of failures: %i\n", failureCount);
    printf ("%% of failed grades: %.2f%%\n", percentFailed);

    return 0;
}