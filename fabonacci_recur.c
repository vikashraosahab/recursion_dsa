// PROGRAM THAT CALCULATE FABONACCI SERIES USING RECURSION TECHNIQUE 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int fabo_series (int); // FUNCTION DEFINITION

// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[])
{
  int n, i = 0;
  printf ("\nEnter n natural number : ");
  while (1)
  {
    if (scanf ("%d",&n) != 1)
    {
      while (getchar () != '\n')
        printf ("\nEnter valid input. Please enter valid input : ");
        continue;
    }
    else break;
  }
  for (i; i < n; i++)
  {
     int res = fabo_series (i);
     printf ("%d,",res);
  }
  return 0; 
}

int fabo_series (int value)
{
  if (value == 0)
     return 0;
  else if (value == 1)
     return 1;
  else 
    return (fabo_series (value - 1) + fabo_series (value - 2));
}
