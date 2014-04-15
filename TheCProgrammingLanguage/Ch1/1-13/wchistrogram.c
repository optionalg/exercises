#include <stdio.h>

#define IN  1
#define OUT 0

main() {

  int c, i, nc, nw, state;

  nc = nw = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      state = OUT;
      ++nc;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
      for (i = 0; i <= nc; ++i)
        printf("=");
      printf("\n");
      nc = 0;
    }
  }

}
