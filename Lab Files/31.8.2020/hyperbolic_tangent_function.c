/***
Last modification: 12 September 2017
***/

#include <stdio.h>
#include <math.h>

#define TRUE 1

static double hypertan(double x);

int main(argc, argv)
int argc;
char **argv;
{
 double x, y;
 FILE *fptr;

 printf("########## Hyperbolic Tangent Function ##########\n");

 // Compare our function to the system function tanh
 x=-2.0;  y=hypertan(x);
 printf("x=%1.4f  hypertan=%1.4f  tanh=%1.4f \n", x, y, tanh(x));
 x=-1.0;  y=hypertan(x);
 printf("x=%1.4f  hypertan=%1.4f  tanh=%1.4f \n", x, y, tanh(x));
 x=0.0;   y=hypertan(x);
 printf("x=%1.4f  hypertan=%1.4f  tanh=%1.4f \n", x, y, tanh(x));
 x=1.0;   y=hypertan(x);
 printf("x=%1.4f  hypertan=%1.4f  tanh=%1.4f \n", x, y, tanh(x));
 x=2.0;   y=hypertan(x);
 printf("x=%1.4f  hypertan=%1.4f  tanh=%1.4f \n", x, y, tanh(x));

 // Now generate a file to be uploaded later by gnuplot
 fptr=fopen("tanh_function.dat", "w");
 if(fptr==NULL)
   {
    fprintf(stderr,"%s: cannot open file for writing.\n", argv[0]);
    return(-1);
   }

 for(x=-5; x<=5.0; x+= 0.02)
   {
    fprintf(fptr,"%1.2f  %1.4f \n", x, tanh(x));
   }
 fclose(fptr);


 return(0);
}/* end of main() */

//------------------------------------------------------------

static double hypertan(double x)
{
 double value;

 value=(exp(x)-exp(-x))/(exp(x)+exp(-x));
 return(value);
}/* end of hypertan() */

//------------------------------------------------------------