/* Exercise 4-5.c - Reformat the following program:
 *
 *  #include <stdio.h>
 *  int main(void){
 *  int n,two_to_the_n;
 *  printf("TABLE OF POWERS OF TWO\n\n");
 *  printf(" n     2 to the n\n");
 *  printf("---    ---------------\n);
 *  two_to_the_n=1;
 *  for(n=0;n<=10;++n){
 *  printf("%2i        %i\n", n, two_to_the_n);
 *  two_to_the_n*=2;}
 *  return 0;}
 * 
 */

// REFORMATTED PROGRAM
#include <stdio.h>
                        // blank line added
int main (void)         // space b/w identifiers and parentheses
{                       // curly brace on newline
    int n;              // indent variable declarations
    int two_to_the_n;   // place variable declarations on individual lines
                        // blank line added
    printf ("TABLE OF POWERS OF TWO\n\n");   // indent and spaces added
    printf (" n     2 to the n\n");          // indent and spaces addded
    printf ("---    ---------------\n");     // indent and spaces addded
                        // blank line added
    two_to_the_n = 1;   // indent and spaces added
                        // blank line added
    for ( n = 0; n <= 10; ++n ) {            // indent and spaces added
        printf  ("%2i        %i\n", n, two_to_the_n);   // indent and spaces added
        two_to_the_n *= 2;
    }                   // closing curly brace placed on newline
                        // blank line added
    return 0;           // place return statement on newline
                        // blank line added
}                       // closing curly brace placed on newline                   