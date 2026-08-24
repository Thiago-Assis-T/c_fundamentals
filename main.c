#include <stdio.h>

int static square(int n) { return n * n; }

int main(void) {
  int num;
  scanf("%d", &num);
  printf("%d\n", square(num));
  return 0;
}
