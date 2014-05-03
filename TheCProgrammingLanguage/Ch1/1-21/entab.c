/*
Credit to this for being helpful:
https://github.com/quincy/K-R-Solutions/blob/master/1-21.c
*/


#include <stdio.h>

#define N 4

void entab(int);

int main() {

  int i, c;
  int l = 0;

  for (i = 0; (c = getchar()) != EOF; ++i) {
    if (c == ' ') {
      ++l;
    }
    else if (c == '\n') {
      entab(l);
      putchar(c);
      l = 0;
      i = -1;
    }
    else {
      entab(l);
      putchar(c);
      l = 0;
    }
  }

}

void entab(int n) {

  while (n >= N) {
    putchar('\t');
    n -= N;
  }

  while (n > 0) {
    putchar(' ');
    --n;
  }

}
