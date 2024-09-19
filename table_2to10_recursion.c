// PROGRAM THAT CACULATE 1 TO N NUMBER OF DIGITIS 
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>
#include <math.h>
#include <string.h>

void print (int); // FUNCITON PROTOTYPE
//
// MAIN FUNCITON OF THE PROGRAM
int main (int argc, char *argv[])
{
  int value;
  printf ("\nEnter value : ");
  scanf ("%d",&value);
  print (value); // CALLING FUNCTION
  return 0;
}
// FUNCTION PROTOTYPE
void print (int value)
{
  if (value == 0)
       return;
    
      printf ("%d,",value);
      print (value - 1);
}
