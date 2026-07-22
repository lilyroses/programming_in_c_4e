/* Exercise 3-3.c - Which of the following are invalid constants? Why? */

#include <stdio.h>

int main (void)
{
    // declarations
    double  d1;
    float   fs1;

    int     io1;
    int     ih1;



    // definitions 
    double          d1  = 123.456;      // valid ; DOUBLE (64-bit precis)
                                        // w/o suffix f, double type implicit
                                        // (123.456f : type float, 32-bit precis)
    printf ("\n[float]          123.456\n");
    printf ("                   (%%f) : %f\n", d1);
    printf ("                   (%%g) : %g\n", d1);

    int             io1  = 0001;         // valid ; octal
    printf ("\n[int (octal)]    0001\n");
    printf ("                   (%%o)  : %o\n", io1);
    printf ("                   (%%#o) : %#o\n", io1);
    printf ("                   (%%d)  : %d\n", io1);

    int             ih1  = 0Xab05;       // valid ; hexadecimal
    printf ("\n[int (hex)]      0Xab05\n");
    printf ("                   (%%x)  : %x\n", ih1);
    printf ("                   (%%#x) : %#x\n", ih1);
    printf ("                   (%%d)  : %d\n", ih1);
    
    float           fs1  = 123.5e2;      // valid ; decimal (scientific notation)
                                        // 123.5 x 10^2
    printf ("\n[float (sci)]    123.5e2\n");
    printf ("                   (%%e) : %e\n", fs1);
    printf ("                   (%%f) : %f\n", fs1);
    printf ("                   (%%g) : %g\n", fs1);

    float           f3  = 98.6F;        // valid ; single-precision decimal, 32-bit
    printf ("\n[float (32-bit)] 98.6F\n");
    printf ("                   (%%f) : %f\n", f3);
    printf ("                   (%%g) : %g\n", f3);
    printf ("                   (%%e) : %e\n", f3);

    //  int     o2  = 0996;         // invalid ; digit 9 in octal constant
    
    unsigned long   u1  = 1234uL;       // valid ; unsigned long int
                                // * NOTE: format codes are %lu, %LU, %lU, %Lu.
                                //     Stick with suffix of %lu for consistency with
                                //     format code.
    printf ("\n[int (u. long)]  1234uL\n");                                
    printf ("                   (%%lu) : %lu\n", u1);
    printf ("                   (%%Lu) : %Lu\n", u1);
    printf ("                   (%%i) : %i\n", u1);
    printf ("                   (%%d) : %d\n", u1);


    long double     d1  = 1.234L;       // valid ; long double
                                        // * Note: NOT a float!!!!! 
    printf ("\n[double (long)]  1.234L\n");
    printf ("                   (%%Lf) : %Lf\n", d1);
    printf ("                   (%%Le) : %Le\n", d1);
    
    
    long int        l2  = 0XABCDEFL;    // valid ; hexadecimal long
    printf ("\n[int (hex long)] 0XABCDEFL\n");
    printf ("                   (%%lx) : %lx\n", l2);
    printf ("                   (%%#lx) : %#lx\n", l2);
    printf ("                   (%%ld) : %ld\n", l2);
    
    
    //    float   f5  = 0x10.5;       // invalid ; hexadecimal decimal
    
    int     h3  = 0xFFFF;       // valid ; hexadecimal
    printf ("\n[int (hex)]      0xFFFF\n");
    printf ("                   (%%x) : %x\n", h3);
    printf ("                   (%%#x) : %#x\n", h3);
    printf ("                   (%%i) : %i\n", h3);
    
    
    int     l1  = 0L;           // valid ; but pointless, long int 
    printf ("\n[int (long)]     0L\n");
    printf ("                   (%%li) : %li\n", l1);
    printf ("                   (%%ld) : %ld\n", l1);
    printf ("                   (%%i)  : %i\n", l1);


    float   f6  = .0001;        // valid
    printf ("\n[float]          .0001\n");
    printf ("                   (%%f) : %f\n", f6);
    printf ("                   (%%g) : %g\n", f6);
    printf ("                   (%%i) : %i\n", f6);


    // unsigned 
}