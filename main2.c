#include <stdio.h>




int main(void) {
  int numero = 0;
  printf ("tamanho em bytes de numero: %ld\n", sizeof(numero));
  printf ("tamanho em bytes de int: %ld\n", sizeof(int));
  printf ("tamanho em bytes de short int: %ld\n", sizeof(short int));
  printf ("tamanho em bytes de long int: %ld\n", sizeof(long int));

  return 0;
}