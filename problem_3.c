#include <stdio.h>
#include <math.h>

#define FACTOR 600851475143
#define PI 3.14159

int prime(long primes[], int number, int c);



/* find the longest prime factor of the input number */
int main(void)
{
    long answer, i, c;
    answer = 0;
    c = 0;

    double domain;
    domain = sqrt((double)FACTOR);

    long length;
    length = PI * domain;



    printf("\nDomain: %f\n", domain);
    printf("\nLength: %ld\n", length);

    long primes[5000];

    for (i=3; i < domain; i=i+2)
    {
      /* printf("i: %ld", i); */

      if ((FACTOR % i) == 0)
      {
        if (i > answer)
        {
          if (prime(primes, i, c))
          {
            ++c;
            answer = i;
          }

        }

        /* else if ((FACTOR / i) > answer && prime(FACTOR/i))
          answer = (FACTOR / i); */
      }

    }


    printf("\nAnswer: %ld.\n", answer);

    return 1;
}

/* check if the input is prime */
int prime(long primes[], int number, int c)
{
  int i, domain;

  domain = sqrt((double)number);

  for (i=3; i < domain; i=i+2)
  {
    if ((number % i) == 0)
      return 0;
  }

  printf("%d|", number);

  primes[c] = number;

  return 1;
}
