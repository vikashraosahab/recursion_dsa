// PROGRAM THAT PERFORM FABONACCI SERIES USING ITERATION
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// FUNCTION DEFINITION
void fabo_series (int);
// MAIN FUNCTION OF THE PROGRAM 
int main (int argc, char * argv[])
{
  int n;
  printf ("\nEnter number : ");
  while (1)
  {
    if (scanf ("%d",&n) != 1)
    {
       while (getchar () != '\n')
        printf ("\nIn-valid input. Please enter valid input : ");
      continue;
    }
    else break;
  }
  printf ("\nFabonacci series : %d\n",n);
  fabo_series (n); // FUNCTION CALLLING
  return 0;
}

void fabo_series (int value)
{
  int a = 0, b = 1;
  printf ("%d,%d,",a,b);
  for (int i = 2; i < value; i++)
  {
     int sum = a + b;
     printf ("%d,",sum);
     a = b;
     b = sum;
  }
}
