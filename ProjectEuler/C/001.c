#include <stdio.h>

#define MAXIMUM 999

main() {

  int i, sum;
  int numbers[MAXIMUM], multiples[MAXIMUM];

  sum = 0;

  for (i = 1; i < (MAXIMUM); i++) {
    numbers[i-1] = i;
  }

  for (i = 0; i <= (MAXIMUM); i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      multiples[i] = i;
    }
    else {
      multiples[i] = 0;
    }
  }

  for (i = 0; i <= (MAXIMUM); i++) {
    sum += multiples[i];
  }

  printf("%d\n", sum);

}
