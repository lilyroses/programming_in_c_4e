/* Exercise 4-9b.c
 *
 * Rewrite programs 4-2.c through 4-5.c, replacing all uses
 * of the `for` statement with equivalent `while` statements.
 * Run each program to verify that both versions are identical.
 * 
 *      4-9b.c : REWRITE OF 4-3.c
 *
 * ORIGINAL PROGRAM:

#include <stdio.h>

int main (void)
{
    int n;
    int triangularNum;

    printf ("\n");
    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");
    
    triangularNum = 0;
    for ( n = 1; n <= 10; ++n ) {
        triangularNum += n;
        printf ("%2i       %i\n", n, triangularNum);
    }
        
    return 0;
}
        
        */
       
/* PROGRAM RE-WRITE : VERIFIED OK */

#include <stdio.h>

int main (void)
{
    int n;
    int triangularNum;
    
    printf  ("\n");
    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNum = 0;
    
    n = 1;
    while ( n <= 10 ) {
        triangularNum += n;
        printf  ("%2i       %i\n", n, triangularNum);
        ++n;
    }

    return 0;
}