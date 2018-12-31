#include <stdio.h>

int i=0;
long sum = 0;
long square = 0;



int main(void)
{

    for (i=0; i<101; ++i)
    {
      sum += i;
      square += (i*i);

    }

    sum = sum * sum;

    printf("\nSum: %ld\tSquare: %ld\n", sum, square);
    printf("\nDifference: %ld\n", sum - square);

    return 1;

}
