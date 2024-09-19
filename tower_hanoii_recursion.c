#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid_input();
// MOVE FUNCTION USING RECURSION
void move(int, char, char,
          char); // THIS METHOD IS USED FOR DEFINE HOW RINGS MOVES FROM A TO C
                 // MEANS SOURCES TO DESTINATION BY USING SPARE TOWER
// MAIN FUNCTION OF THE PROGRAM
int main(int argc, char *argv[]) {
  int number;
  printf("\nEnter value : ");
  number = valid_input();
  move(number, 'A', 'B', 'C');
  return 0;
}
// MOVE FUNCTION METHOD THAT USED FOR MOVE DISK FROM TOWER A,B,C BY USIGN
// RECURSION
void move(int n, char source, char destination, char sparse) {
  if (n == 1) // BASE CASE
    printf("\nMove %d disk from %c to %c", n, source, destination);
  else {
    move(n - 1, source, sparse, destination);
    printf("\nMove %d disk from %c to %c", n, source, destination);
    move(1, source, destination, sparse); // MOVE LAST DISK FROM A TO C
    printf("\nMove 1 disk from %c to %c ", source, destination);
    move(n - 1, sparse, destination, source); // MOVE B TO A
  }
}
int valid_input() // VALID_INPUT MEHTOD JUST VALIDATE TAKEN INPUT FROM USER
{
  int value;
  while (1) {
    if (scanf("%d", &value) != 1) {
      while (getchar() != '\n')
        printf("\nIn-valid input. Please enter valid input.");
      continue;
    } else
      break;
  }

  return value;
}
