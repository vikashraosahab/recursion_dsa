// PROGRAM THAT CALCULATE FACTORIAL USING ITERATION METHOD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// MAIN FUNTION OF THE PROGRAM 
int main (int argc, char * argv[])
{
  int n,i = 1,sum = 1;
  printf ("\nEnter number : ");
  scanf ("%d",&n);
  if (n > 1)
  {
     for (i; i <= n; i++)
     {
        sum = sum * i;
     }
  }
  else 
  {
      printf ("\nYour enter value is in-valid ? ");
      exit (1);
  }
  printf ("\nResult........\nFactorial of %d is %d : ",n,sum);
  return 0; 
}
