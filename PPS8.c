#include<stdio.h>

int main() {
  int x, y, *a, *b;
  x = 10;
  y = 20;

  *a = x;
  *b = y;

  x = *a;
  y = *b;

  printf("%d %d\n", x, y);

  return 0;
}