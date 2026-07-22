/* Exercise 4-9a.c
 *
 * Rewrite programs 4-2.c through 4-5.c, replacing all uses
 * of the `for` statement with equivalent `while` statements.
 * Run each program to verify that both versions are identical.
 * 
 *      4-9a.c : REWRITE OF 4-2.c
 *
 * ORIGINAL PROGRAM:
 
 #include <stdio.h>

int main (void)
{
    int n;
    int triangularNum;
    
    triangularNum = 0;
    
    for ( n = 1; n <= 200; n = n + 1 ) {
        triangularNum = triangularNum + 1;
    }

    printf ("\nThe 200th triangular number is %i\n", triangularNum);
    
    return 0;
}

*/

/* PROGRAM RE-WRITE : VERIFIED OK */

#include <stdio.h>

int main (void)
{
    int n;
    int triangularNum;
    
    triangularNum = 0;
    
    n = 1;
    while ( n <= 200 ) {
        triangularNum = triangularNum + n;
        n = n + 1;
    }
    
    printf ("\nThe 200th triangular number is %i\n", triangularNum);

    return 0;
}