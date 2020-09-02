/***
Last modification: 12 September 2017
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//------------------------------------------------------------
int main(argc, argv)
int argc;
char **argv;
{
 double sum, *table;// This is a variable-size table of real numbers
 // "*double" means that table is a pointer to an array of doubles
 // The pointer points to the table without knowing its size
 // The exact size will be known when allocating the array via malloc() or calloc()
 int i, n;

 printf("\nEnter the array size n: ", n);
 scanf("%d", &n);
 if((n<1)||(n>15)) 
   {
    fprintf(stderr,"%s: n must be in the range 1 to 15\n\n", argv[0]);
    return(-1);
   }

 // memory allocation
 table=(double*) calloc(n, sizeof(double));
 if(table==NULL)
   {
    fprintf(stderr,"%s: memory allocation error\n", argv[0]);
    return(-1);
   }

 // put numbers in the table
 for(i=0; i<n; i++) table[i]=exp((double)(2.0*i+1.0));
 for(sum=i=0; i<n; i++) sum += table[i];
 printf("Sum of the exp() function of the %d real numbers is %1.2e \n", n, sum);

 free(table);
 return(0);
}/* end of main() */

//------------------------------------------------------------