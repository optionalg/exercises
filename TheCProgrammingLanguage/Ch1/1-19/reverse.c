#include <stdio.h>

#define MAXLINE 1000

// a getline function is already present in stdio
int _getline(char line[], int maxline);
void reverse(char str[]);

main()
{

  int len;
  char line[MAXLINE];

  while ((len = _getline(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s", line);
  }

  return 0;

}

int _getline(char s[], int lim) {

  int c, i;

  for (i=0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;

}

void reverse(char s[]) {

  int i, nc;
  char t;

  for (nc = 0; s[nc] != '\0'; ++nc)
    ;

  --nc;

  for (i = 0; i < nc; ++i) {
    t = s[i];
    s[i] = s[nc - 1];
    s[nc - 1] = t;
    --nc;
  }

}
