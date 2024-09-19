// PROGRAM THAT CALCULATE N NUMBER OF SUM USING RECURSION
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int fun (int); // FUNCTION PROTOTYPE
// MAIN FUNCITON OF THE PROGRAM 
int main (int argc, char *argv[])
{
  int num; // DECLARATION VARIABLE
  printf ("\nEnter number : ");
  scanf ("%d",&num); 
  printf ("Result : %d",fun (num)); 
  return 0; // TERMINATE THE AFTER SUCCESSFULLY EXECUTION
}

// FUNCTION DEFINITION
int fun (int val)
{
   if (val != 0)
  {
     return val + fun (val - 1); 
  }
}
