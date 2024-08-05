#include <stdio.h>

int main() {

  int x = 5;
  float pi = 3.14;
  int *ptr_x = &x;
  int *ptr_pi = &pi;
  printf("&x: %p x: %d\n", &x, x);
  printf("ptr_x: %p ptr_x: %p, *ptr_x: %d\n", &ptr_x, ptr_x, *ptr_x);
  
}