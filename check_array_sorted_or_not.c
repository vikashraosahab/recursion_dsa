// PROGRAM THAT CHECK THAT GIVEN ARRAY IS SORTED OR NOT UNSORTED 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int MAXSIZE  = 20; // GLOBAL CONSTANT FOR ARRAY SIZE
int  input ();
int isSortedArray (int [],int);
void sorted (int [],int);
void print (int [],int);
// MAIN FUNCTION OF THE PROGRAM
int main (void)
{
  int ary[MAXSIZE],size,i; // DECLARATION OF THE VARAIBLE 
  size_lable:printf ("\nEnter the size of the array : ");
  size = input (); // GET VALIDATED INPUT 
  if (size <= MAXSIZE && size > 0)
  {
    for (i = 0; i < size; i++)
    {
       printf ("\nvalue : ");
       ary [i] = input ();
    }
  }
  else 
  {
    printf ("\nIn-valid input, Please enter valid  size again : ");
    goto size_lable;
  }
 
  // CHECK THE ARRAY IS SORTED OR NOT
  int res = isSortedArray (ary,size);
  if (res == 1)
    printf ("\n Array is sorted !");
  else 
  {
    printf ("\nArray is not sorted yet !");
    sorted (ary,size);
    printf ("\nNow array is sorted now !");
  }
  printf ("And Array are : ");
  print (ary,size);
  return 0;
}

int input ()
{
  int val;
  while (1)
  {   
    if (scanf ("%d",&val) != 1)
    {
       while (getchar () != '\n')
        printf ("\nIn-valid input. Please enter valid input.\n");
       continue;
    }
    else 
     break; // END THE LOOP AFTER SUCCESSFULLY VALUE 
  }

  return val;
}
int isSortedArray (int ary[],int size)
{
  int i = 0,flag = 0;
  for (i; i < size; i++)
  {
    if (ary [i] <= ary [i + 1])
    {
        flag = 1;
    }
    else 
    {
        flag = 0;
        break;
    }
  }
  if (flag == 1)
    return 1;
  else 
    return -1;
}
void sorted (int ary[],int size)
{
  int i,j;
  for (i = 0; i < size; i++)
  {
    j = i + 1;
    for (j; j <= size; j++)
    {
      if (ary [i] > ary [j])
      {
        int temp = ary [j];
        ary [j] = ary [i];
        ary [i] = temp;
      }
    }
  }
}
void print (int ary [],int size)
{
for (int i = 0; i < size; i++)
{
    printf ("%d ",ary [i]);
  }
}
