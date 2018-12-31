#include <stdio.h>

/* find the sum of all multiples of 3 and 5 under 1000*/

#define THREE 3
#define FIVE 5

main()
{
  int i;

  long total;
  total = 0;


  for (i=0; i<1000; ++i)
  {
    if ((i % THREE) == 0 || (i % FIVE) == 0)
      total += i;

  }

  printf("\n\nTotal product: %ld\n", total);

}
