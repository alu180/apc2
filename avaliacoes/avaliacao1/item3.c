#include <stdio.h>

int main() {

  int n1 = 3, n2 = 5;
  int *p;
  int *ptr;
  p = &n1;
  ptr = &n2;
  //printf("n1: %d, n2: %d\n",n1 ,n2); para testes
  *p = 5;
  *ptr = 3;
  printf("n1: %d, n2: %d\n",n1 ,n2);
  return 0;
}