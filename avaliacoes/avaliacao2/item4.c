#include <stdio.h>


int main() {
  int num[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
  };
  int *p = &num[0][0];
  for (int i = 0; i < 12; i++) {
      if (*(p + i) % 2 == 0) {
          *(p + i) = 0;
      }
       printf("num[%d] = %d\n", i, p[i]);
  }
  return 0;
}