#include <stdio.h>

#define MAXLINE 1000

// a getline function is already present in stdio
int _getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{

  int len;
  int cur;
  char line[MAXLINE];
  char lntxt[MAXLINE];

  cur = 0;

  while ((len = _getline(line, MAXLINE)) > 0) {
    cur = len;
    printf("%d  ", cur);
    copy(lntxt, line);
    if (cur > 0) {
      printf("%s", lntxt);
    }
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

void copy(char to[], char from[]) {

  int i;

  i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }

}
