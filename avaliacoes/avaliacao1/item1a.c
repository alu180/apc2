#include <stdio.h>

int main() {

  int i = 5;
  int *p;
  p = &i;
  printf("&p: %p\n", &p);
  printf("p  &i - endereco de i: %p\n", p);
  printf("i - valor de i: %d\n",*p);
  *p = 7;
  //printf("&i (i - novo valor de i e de: %d)\n", i);
  printf("*p i - valor de i: %d\n",*p);
  int deu_certo = scanf("%d", p);
  printf("*p i - valor de i: %d\n",*p);

  
  return 0;
}