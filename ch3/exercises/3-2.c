/* Exercise 3-2.c - Identify the following variable names as valid or
 * invalid. Indicate why or why not. */

#include <stdio.h>

int main (void)
{
    // Int                  ---> VALID
    // Calloc               ---> VALID
    // floating             ---> VALID
    // ReInitialize         ---> VALID

    // char                 ---> INVALID ; is a data type
    
    // Xx                   ---> VALID
    // _1312                ---> VALID
    // _                    ---> VALID
    
    // 6_05                 ---> INVALID ; may not begin with a digit
    
    // alpha_beta_routine   ---> VALID
    // z                    ---> VALID
    // A$                   ---> VALID

    int     Int                 = 1;
    int     Calloc              = 1;
    int     floating            = 1;
    int     ReInitialize        = 1;
    
    // int     char                = 0;
    
    int     Xx                  = 1;
    int     _1312               = 1;
    int     _                   = 1;
    
    // int     6_05                = 0;
    
    int     alpha_beta_routine  = 1;
    int     z                   = 1;
    int     A$                  = 1;

    printf ("\nInt = %i : VALID\n", Int);
    printf ("Calloc = %i : VALID\n", Calloc);
    printf ("floating = %i : VALID\n", floating);
    printf ("ReInitialize = %i : VALID\n", ReInitialize);
    
    printf ("char : INVALID\n");
    
    printf ("Xx = %i : VALID\n", Xx);
    
    printf ("_1312 = %i\n", _1312);
    printf ("_ = %i\n", _);
    
    printf ("6_05 : INVALID\n");
    
    printf ("alpha_beta_routine = %i : VALID\n", alpha_beta_routine);
    printf ("z = %i : VALID\n", z);

    printf ("A$ : %i\n", A$);
}