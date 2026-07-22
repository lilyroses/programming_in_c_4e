/* Exercise 4-9c.c
 *
 * Rewrite programs 4-2.c through 4-5.c, replacing all uses
 * of the `for` statement with equivalent `while` statements.
 * Run each program to verify that both versions are identical.
 * 
 *      4-9c.c : REWRITE OF 4-4.c
 *
 * ORIGINAL PROGRAM:

#include <stdio.h>

int main (void)
{
    int n;
    int num;
    int triangularNum;

    printf  ("\nWhat triangular number do you want? ");
    scanf   ("%i", &num);
    
    triangularNum = 0;
    
    for ( n = 1; n <= num; ++n ) {
        triangularNum += n;
    }
        
    printf ("\nTriangular number %i is %i\n", num, triangularNum);
    
    return 0;
    }
    
    */
   
   /* PROGRAM RE-WRITE : VERIFIED OK */
#include <stdio.h>

int main (void)
{
    int n;
    int num;
    int triangularNum;

    printf  ("\nWhat triangular number do you want? ");
    scanf   ("%i", &num);
    
    triangularNum = 0;
    
    n = 1;
    while ( n <= num ) {
        triangularNum += n;
        ++n;
    }
    
    printf ("\nTriangular number %i is %i\n", num, triangularNum);
    
    return 0;
}