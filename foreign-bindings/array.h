#ifndef IMPROC_H
#define IMPROC_H
#include <stdbool.h>

typedef struct Matsize {
  int len;
  int *data;
} Matsize;

#ifdef __cplusplus
extern "C" {
#endif

int *demo1(int *len);
Matsize demo2();

#ifdef __cplusplus
}
#endif

#endif