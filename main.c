#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int num = 0;
  int count = 0;
  scanf("%d", &num);
  FILE *out = fopen("/tmp/clines.txt", "we");
  if (out == NULL) {
    return EXIT_FAILURE;
  }

  char buf[1024];
#pragma unroll 5
  for (int i = 0; i < num; i++) {
    if (fgets(buf, sizeof(buf), stdin) != NULL) {
      fputs(buf, out);
      // Ensure a trailing newline if missing
      size_t len = strlen(buf);
      if (len > 0 && buf[len - 1] != '\n')
        fputc('\n', out);
    }
  }

  int file_close_status = fclose(out);
  if (file_close_status != EXIT_SUCCESS) {
    perror("Error closing the file");
    return file_close_status;
  }

  FILE *input = fopen("/tmp/clines.txt", "re");
  if (input == NULL) {
    return EXIT_FAILURE;
  }

  while (fgets(buf, sizeof(buf), input) != NULL) {
    count++;
  }

  file_close_status = fclose(input);
  if (file_close_status != EXIT_SUCCESS) {
    perror("Error closing the file");
    return file_close_status;
  }

  printf("lines: %d\n", count);

  return EXIT_SUCCESS;
}
