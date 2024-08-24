/*#include <stdio.h>

int main() {
  int vet[8] = {4,6,3,8,2,5,9,1};
  for (int i = 0; i < 8; i++) {
    printf("vet[%d] = %d\n", i,vet[i]);
  }


  return 0;
}*/

/*#include <stdio.h>

int main() {
    int n0 = 4, n1 = 6, n2 = 3, n3 = 8, n4 = 2, n5 = 5, n6 = 9, n7 = 1;
    int *ptr[8] = {&n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7};

    for (int i = 0; i < 8; i++) {
        printf("vet[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int vet[8] = {4, 6, 3, 8, 2, 5, 9, 1};
    int *ptr = vet;

    for (int i = 0; i < 8; i++) {
        printf("vet[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}