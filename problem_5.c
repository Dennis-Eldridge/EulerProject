#include <stdio.h>

int main(void)
{
  int i;
  long total = 20;
  int answer = 0;


  while (!answer)
  {
    for (i=2; i<20; ++i)
    {
        if (total % i != 0)
        {
          total += 20;
          break;
        }

    }

    if (i==20)
      answer = 1;

  }

  printf("Answer is: %ld\n", total);
  return 1;

}
