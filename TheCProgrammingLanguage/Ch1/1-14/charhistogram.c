#include <stdio.h>

main() {

  int c, i, chars[128];

  for (c = 0; c < 128; ++c)
    chars[c] = 0;

  while ((c = getchar()) != EOF)
    ++chars[c];

  for (c = 0; c < 128; ++c) {
    if (chars[c] > 0) {
      if (c != '\n' && c != '\t' && c != '\b') {
        putchar(' ');
        putchar(c);
      }
      else {
        switch(c) {
        case '\n':
          printf("\\n"); break;
        case '\b':
          printf("\\b"); break;
        case '\t':
          printf("\\t"); break;
        }
      }
      printf(": %d ", chars[c]);
      for (i = 0; i <= chars[c]; ++i)
        printf("=");
      printf("\n");
    }
  }

}
