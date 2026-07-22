/* Exercise 2-5.c
 * Identify syntactic errors.
 * Then type in the corrected program.
 */

/* SYNTACTICALLY ERRONEOUS PROGRAM
 * #include <stdio.h>
 * 
 * int main (Void)                                      !! Void ---> void
 * {
 *             INT     sum;                             !! INT  ---> int
 *             /* COMPUTE RESULT                        !! /*   ---> //
 *             sum = 25 + 37 - 19                       !! 19   ---> 19;
 *             /* DISPLAY RESULTS //                    !! //   ---> */
 /*            printf ("The answer is %i\n" sum);       !! \n"  ---> \n",
 *             return 0;
 * }
 */

/* CORRECTED PROGRAM */
#include <stdio.h>

int main (void)
{
    int     sum;

    // COMPUTE RESULT
    sum = 25 + 37 - 19;

    /* DISPLAY RESULTS */
    printf("The answer is %i\n", sum);

    return 0;
}