#include <stdio.h>

/* Find the sum of all even fibonachi numbers under 4 million */
int main(void)
{
  long total, i, a, b, f;
  total = 2;
  a = 1;
  b = 2;


  for (i = 3; i < 4000000; i = a + b)
  {

      /* only total even numbers */
      if ((i % 2) == 0)
        total += i;

      a = b;
      b = i;
      printf("\nf:%ld\t\tt:%ld", i, total);
  }

  printf("\n\nTotal: %ld\n\n", total);


  return 0;

}
