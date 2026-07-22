/* Exercise 4-9d.c
 *
 * Rewrite programs 4-2.c through 4-5.c, replacing all uses
 * of the `for` statement with equivalent `while` statements.
 * Run each program to verify that both versions are identical.
 * 
 *      4-9d.c : REWRITE OF 4-5.c
 *
 * ORIGINAL PROGRAM:

#include <stdio.h>

int main (void)
{
    int n;
    int num;
    int triangularNum;
    int i;

    for ( i = 1; i <= 5; ++i ) {
        printf  ("\nEnter triangular number: ");
        scanf   ("%i", &num);

        triangularNum = 0;

        for ( n = 1; n <= num; ++n ) {
            triangularNum += n;
        }

        printf ("\nTriangular number %i is %i\n", num, triangularNum);
    }

    return 0;
}

*/

/* PROGRAM RE-WRITE */

#include <stdio.h>

int main (void)
{
    int n;
    int num;
    int triangularNum;
    int i;

    i = 1;
    while ( i <= 5 ) {
        printf  ("\nEnter triangular number: ");
        scanf   ("%i", &num);

        triangularNum = 0;

        n = 1;
        while ( n <= num ) {
            triangularNum += n;
            ++n;
        }

        printf ("\nTriangular number %i is %i\n", num, triangularNum);
        ++i;
    }


    return 0;
}