// PROGRAM THAT CALCULATE FACTORIAL USING RECURSION 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// FACTORIAL RECURSIVE FUNCTION 
int fact_recursive (int);
// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[])
{
   int num;
   printf ("\nEnter number : ");
   scanf ("%d",&num);
   printf ("Factorial of %d is : %d",num,fact_recursive (num)); // OUTPUT RESULT
   return 0;
}

// RECURSIVE FACTORIAL FUNCTION 
int fact_recursive (int value)
{
  if (value != 1)
  {
      return value * fact_recursive (value -1); // CALCULATE VALUE WITH VALUE - 1 , UNTIL VALUE NOT BECOME 1 IN THE BASE CASE
  }
}
