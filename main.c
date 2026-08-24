#include <stdio.h>

int main(void) {
  int num = 0;
  scanf("%d", &num);

  /* Print exactly one line:
       n divisible by 15 -> FizzBuzz
       n divisible by 3  -> Fizz
       n divisible by 5  -> Buzz
       anything else     -> n itself

     TODO: write the if / else if / else chain. All four cases. */

  if (num % 15 == 0) {
    printf("FizzBuzz");

  } else if (num % 3 == 0) {
    printf("Fizz");
  } else if (num % 5 == 0) {
    printf("Buzz");
  } else {
    printf("%d", num);
  }

  return 0;
}
