#include <stdio.h>

#define N 20

int main() {

  int i, c;

  for (i = 0; (c = getchar()) != EOF; ++i) {
    if (c != ' ') {
      if (c != '\n') {
        ++i;
      }
      else {
        i = 0;
      }
      if (i > ((N*2) - 1)) {
        putchar('\n');
        i = 0;
      }
    }

    putchar(c);
  }

}
