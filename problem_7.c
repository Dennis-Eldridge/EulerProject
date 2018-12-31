#include <stdio.h>
#include <math.h>


int prime(long primes[], long number, int c);



/* find the longest prime factor of the input number */
int main(void)
{
    long answer, c, x;
    int i=1;
    int isPrime = 0;

    long primes[10001];
    primes[0] = 2;
    x = 3;


    while (i<10001)
    {
      isPrime = prime(primes, x, i);
      if (isPrime)
      {
        i++;
      }
      
      x += 2;

    }



    printf("\nAnswer: %ld.\n", primes[10000]);

    return 1;
}

/* check if the input is prime */
int prime(long primes[], long number, int c)
{
  int i;
  long domain;
  i = 0;
  int prime = 1;

  domain = sqrt((double)number);

  while (primes[i] <= domain && primes[i] != 0)
  {
    if (number % primes[i] == 0)
    {
      /* printf("fail"); */
      prime = 0;
      break;
    }

    else
      ++i;
  }

  if (prime)
  {
    /* printf("%ld|", number); */

    primes[c] = number;

    return 1;
  }
  else
    return 0;

}
