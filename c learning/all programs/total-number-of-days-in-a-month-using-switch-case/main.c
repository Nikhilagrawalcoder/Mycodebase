/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int days;
  scanf ("%d", &days);
  switch (days)
    {
    case 1:
    case 3:
    case 5:
    case 8:
    case 10:
    case 12:
      printf ("%d", 31);
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      printf ("%d", 30);
      break;
    case 2:
      printf ("%d", 28);
    default:
      printf ("Not a valid month");
    }
  return 0;
}
