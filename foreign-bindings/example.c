#include "array.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  /*
    Case 1.
  */
  int sz_len = 0;
  int *sizes = demo1(&sz_len);
  printf(">>> MatSize: len=%d, data: ", sz_len);
  for (int i = 0; i < sz_len; ++i) {
    printf("%d, ", sizes[i]);
  }
  printf("\n");

  /*
    Case 2.
  */
  Matsize mat_size2 = demo2();
  printf(">>> MatSize2: len=%d, data: ", mat_size2.len);
  for (int i = 0; i < mat_size2.len; ++i) {
    printf("%d, ", mat_size2.data[i]);
  }
  printf("\n");

  free(sizes);
  free(mat_size2.data);

  return 0;
}