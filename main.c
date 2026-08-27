#include <stdio.h>
#include <stdlib.h>

int static doSum(int const *nums, int const size) {
  int sum = 0;

#pragma unroll 5
  for (int i = 0; i < size; i++) {
    sum += nums[i];
  }

  return sum;
}

int main(void) {
  int size = 0;

  scanf("%d", &size);

  int *nums =
      malloc(size * sizeof(int)); /* n ints' worth of bytes, from the heap */
  if (nums == NULL) {             /* allocation CAN fail */
    return 1;
  }

#pragma unroll 5
  for (int i = 0; i < size; i++) {
    scanf("%d", &nums[i]); /* index it exactly like an array */
  }

  // for (int i = 0; i < size; i++) {
  //   printf("%d\n", nums[i]); /* index it exactly like an array */
  // }

  int sum = doSum(nums, size);
  printf("%d\n", sum);

  free(nums); /* hand the bytes back */
  return 0;
}
