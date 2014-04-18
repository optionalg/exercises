#include <stdio.h>

#define N 4

main() {

  int i, c, pb;

  i = 0;
  pb = 0;

  while ((c = getchar()) != EOF) {
    if (i <= N) {
      i += 1;
    }
    else {
      i = 1;
    }
    if (c != '\t') {
      putchar(c);
      pb = 0;
    }
    else if (pb == 0) {
      if (i == N) {
        printf("    ");
      }
      else {
        putchar(' ');
      }
      pb = 1;
    }
  }

}
