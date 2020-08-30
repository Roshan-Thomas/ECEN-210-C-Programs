#include <stdio.h>

/************************************** 
Lecture of 30 August 2020 
Learning about printf() and variable declaration.
***************************************/

int main()
{
 int i; // declaring an integer variable
 double x; // declaring a double-precision floating-point (real number) variable
 char c; // this is just one character (one letter)
 
 printf("Hello!\n"); // just printing on the screen the string "Hello!"

 i = 1391; // assigning 13 to i
 x = 27.513; // assigning 27.513 to x
 c = 'H'; // assigning H to c (single quotes for characters, double quotes for strings)

 // printf is a function with a variable number of parameters!
 // below, printf() is taking 4 parameters
 printf("i=%d  x=%f  c=%c \n", i, x, c);
 
 return(0);
}/* end of main() */

