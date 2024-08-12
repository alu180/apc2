#include <stdio.h>

int main(void) {
  int n = 1025;
  char *p = &n;
  printf("byte 0: %d\n, byte 1: %d", *p, *(p+1));
  *p = *p++;
    printf("p: %d\n", *p);
 

  return 0;
}