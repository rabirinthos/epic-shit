/******************************************************************************

                                  Lab #6 
                              

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int choice = 0;
  int i = 1;
  int f = 1;
  printf ("Enter positive (non-zero) integer for factorial:");
  scanf ("%d", &choice);
  if (choice <= 0)
    {
      printf ("Choice must be greater than zero!");
    }
  else
    {
      while (i <= choice)
	{
	  f*=i;
	  i++;
	  printf ("%d! = %d \n", choice, f);



	}
    }




  return 0;
}


