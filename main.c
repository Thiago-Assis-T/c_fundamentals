#include <stdio.h>

void static swap(int *pointerA, int *pointerB) {
  int temp = *pointerB;
  *pointerB = *pointerA;
  *pointerA = temp;
  // Swap the values pointed to by a and b.
}

int main(void) {
  int num1 = 0;
  int num2 = 0;
  scanf("%d %d", &num1, &num2);
  swap(&num1, &num2);
  printf("%d %d\n", num1, num2);
  return 0;
}
