/***
Last modification: 12 September 2017
***/

#include <stdio.h>
#include <math.h>

#define TRUE 1

main()
{
 int iter=0;
 double x, y, PI;

 x=1.0;
 PI=4.0*atan(x);
 printf("PI=%1.12f \n", PI);

 // Running an infinite loop
 printf("I am running y=cos(x) forever...\n");
 do
  {
   x=iter*PI/100.0;
   y=cos(x);// angle must be in radian
   if(++iter==100) iter=0;
  }
 while(TRUE);


}/* end of main() */
