#include <stdio.h>

#define MAX_ROWS 64
#define CUBE(num) ((num) * (num) * (num))

int main(void) {
  int num = 0;
  scanf("%d", &num);
  int numCubed = CUBE(num);
  printf("%d cubed is %d", num, numCubed);
  return 0;
}
