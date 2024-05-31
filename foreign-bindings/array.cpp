#include "array.h"
#include <stdlib.h>

int *demo1(int *len) {
  int size = 2;
  int *data = (int *)malloc(sizeof(int) * size);
  if (!data) {
    exit(1);
  }

  for (int i = 0; i < size; ++i) {
    data[i] = i;
  }
  *len = size;
  return data;
}

Matsize demo2() {
  int size = 2;
  int *data = (int *)malloc(sizeof(int) * size);
  if (!data) {
    exit(1);
  }

  for (int i = 0; i < size; ++i) {
    data[i] = i;
  }
  return {size, data};
}