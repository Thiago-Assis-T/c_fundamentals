#include <stdio.h>

int main(void) {
  int num = 0;
  int total = 0;
  scanf("%d", &num);

  for (int i = 0; i <= num; i++) {
    total += i;
  }
  printf("%d", total);
  return 0;
}
