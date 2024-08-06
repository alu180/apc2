#include <stdio.h>

int main() {

  int numero;
  int *p;
  p = &numero;
  *p = 5;
  //printf("&i (i - novo valor de i e de: %d)\n", i);
  printf("*p numero - valor de numero: %d\n",*p);


    return 0;
  }