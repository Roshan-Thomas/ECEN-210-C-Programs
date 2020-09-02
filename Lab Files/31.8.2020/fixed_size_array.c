/***
Last modification: 12 September 2017
***/

#include <stdio.h>
#include <math.h>

//------------------------------------------------------------
int main(argc, argv)
int argc;
char **argv;
{
 int sum1, table1[20];// This is a fixed-size table of 20 integers
 double sum2, table2[20];// This is a fixed-size table of 20 real numbers
 unsigned char table3[20];// This is a fixed-size table of 20 characters
 int i, n;

 printf("\nint: this type is for integers, one int variable has 32 bits \n");
 printf("An int variable varies from -2^31 to 2^31-1 (2^32 is almost 4 billion)\n\n");

 printf("double: this type is for double-precision reals, one double variable has 64 bits \n");
 printf("A double variable varies (in absolute value) from 1.7E-308 to 1.7E+308\n");
 printf("1E-308 means 10^(-308) and 1E+308 means 10^(308) \n\n");

 printf("char: this type is for characters, one char variable has 8 bits (char=byte)\n");
 printf("A signed char variable varies from -128 to 127 \n");
 printf("An unsigned char variable varies from 0 to 255 (it contains characters in ASCII code)\n\n");

 n=4;// the tables can store up to 20 numbers, we are using 4 only
 table1[0]=-3;
 table1[1]=table1[2]=5;
 table1[3]=11;
 for(sum1=i=0; i<n; i++) sum1 += table1[i];
 printf("The sum of the %d integers is %d \n", n, sum1);

 table2[0]=4.1e-3;
 table2[1]=table2[2]=5.5e-2;
 table2[3]=1.0/10.0;
 for(sum2=i=0; i<n; i++) sum2 += table2[i];
 printf("The sum of the %d reals is %1.4f=%1.4e \n", n, sum2, sum2);

 table3[0]='e';
 table3[1]='c'; 
 table3[2]='e';
 table3[3]='n';
 table3[4]=0;// a string in C language terminates with a 0, the 0 number not the '0' charcater.
 printf("Printing characters one-by-one: the word is %c%c%c%c \n", table3[0], table3[1], table3[2], table3[3]);
 printf("Printing the whole string     : the word is %s \n\n", table3);

 return(0);
}/* end of main() */

//------------------------------------------------------------