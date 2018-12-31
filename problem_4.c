#include <stdio.h>
#include <math.h>
#include <string.h>

int Pallendrome(int p);

/* find the largst pallendrome made from the product of 2 digit numbers */

int main(void){

  long i, j, answer, product;
  answer = 0;

  /* iterate through the products of all 3 digit numbers */
  for (i=999; i>100; --i) {



    for (j=999; i > 100; --j) {

      product = i * j;

      if (product < answer)
        break;


      if (Pallendrome(product) && (product > answer)) {
        answer = product;
        break;
      }

    }

  }

  printf("\nAnswer: %ld\n", answer);

}


/* check if the number is a pallendrome */
int Pallendrome(int p) {

  int i, bound, arraySize;


  if (p > 999 && p < 10000)
  {
      arraySize = 4;
  }
  else if (p > 9999 && p < 100000) {
    arraySize = 5;
  }
  else
  {
    arraySize = 6;
  }

  char a[arraySize];




  sprintf(a, "%d", p);

  bound = strlen(a) / 2;
  /* printf("P: %d A: %s Bounds :%d\n", p, a, bound); */

  for (i = 0; i < bound; ++i) {
    /* printf("a: %d b: %d", a[i], a[bound-1-i]); */
    /* printf("A: %c | B: %c\n", a[i], a[strlen(a)-1-i]); */
    if (a[i] != a[strlen(a)-1-i])
    {
      return 0;
    }

  }

  /* printf("done!"); */

  return 1;

}
