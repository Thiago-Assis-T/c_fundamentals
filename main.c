#include <stdio.h>

int main(void) {
  int nums[5] = {0};
  int max;
  for (int i = 0; i < 5; i++) {
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < 5; i++) {
    if (max < nums[i]) {
      max = nums[i];
    }
  }

  printf("%d", max);
  return 0;
}
