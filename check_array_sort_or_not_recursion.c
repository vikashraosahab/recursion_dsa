// PROGRAM THAT CHECK ARRAY IS SORT OR NOT BY USING RECURSION
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 40      // MACROS FUNCTION THAT DEFINE CONSTANT OF THE MAXSIZE
int valid_input();      // VALIDATING THE INPUT AS INTEGER OR NOT
void print(int[], int); // FUNCTION THAT PRING ALL ELEMENTS OF THE ARRAY
int isSorted(int[], int,
             int); // FUNCTION THAT CHECK GIVEN ARRAY IS SORTED OR UNSORTED

// MAIN FUNCTION OF THE PROGRAM
int main(int argc, char *argv[]) {
  int ary[MAXSIZE], size, i;
  printf("\nEnter size of the array : ");
  size = valid_input();
  printf("\nEnter value of the array : ");
  for (i = 0; i < size; i++) {
    printf("\nEnter value : ");
    ary[i] = valid_input();
  }
  print(ary, size);
  int res = isSorted(ary, size, i = 0);
  if (res == 1)
    printf("Array is sorted");
  else if (res == -1)
    printf("\nArray is not sorted");
  return 0;
}
int valid_input() // VALIDATING THAT INPUT IS ONLY INTEGER
{
  int value;
  while (1) {
    if (scanf("%d", &value) != 1) {
      while (getchar() != '\n')
        printf("\nIn-valid input. Please enter valid input.\nEnter value of "
               "the array : ");
      continue;
    } else
      break; // OTHER WISE BREAK THE LOOP IF INPUT IS INTEGER
  }

  return value; // REUTRN VALUE
}
void print(int ary[], int size) {
  printf("\nElements of the array : ");
  for (int i = 0; i < size; i++) {
    printf("%d,", ary[i]);
  }
}
int isSorted(int ary[], int size, int i) // CHECKING ARRAY IS SORTED OR UNSORTED
{
  if (i == size - 1)
    return 1; // ARRAY IS SORTED
  if (ary[i] > ary[i + 1]) {
    return -1; // ARRAY IS NOT SORTED
  }
  return isSorted(ary, size, i = i + 1); // RECURSIVE CALLING
}
