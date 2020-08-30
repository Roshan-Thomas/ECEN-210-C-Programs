#include <stdio.h>
#include <math.h>

/************************************** 
Lecture of 30 August 2020 
Learning about calling a cosine function and defining a constant.
***************************************/

#define PI 3.141592653589

int main()
{
 double x, y; // declaring two double-precision floating-point (real numbers) variables

 x=PI/10.0; // This is 18 degrees
 y=cos(x); // calling the cosine function with one parameter
 printf("cosine of %f is %f\n", x, y); // just printing on the screen

 return(0);
}/* end of main() */

