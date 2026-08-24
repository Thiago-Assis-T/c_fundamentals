#include <stdio.h>
#include <string.h>

int main(void) {
  char buf[100];
  long long stringLength = 0;
  fgets(buf, sizeof buf, stdin);

  stringLength = strlen(buf);

  printf("%lld", stringLength - 1);
  // Strip trailing newline if present, then print length.
  return 0;
}
