/******************************************************************************

                                  Lab #08
                               

*******************************************************************************/
#include <stdio.h>

int is_multiple_of_five (int x, int y);

int
main ()
{

  int choice = 0;
  printf ("Enter any number to see if it is a multiple of five:\n");
  scanf ("%d", &choice);
  is_multiple_of_five (choice, 5);
  if (choice % 5 == 0)
    {

      printf ("%d is a multiple of five.", choice);
    }
  else if (choice % 5 > 0)
    {
      printf ("%d is NOT a multiple of five.", choice);
    }

  return 0;
}

int
is_multiple_of_five (int x, int y)
{

  return (x / y);

}

