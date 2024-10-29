#include <stdio.h>

void inverteSinal(int *n) {
    *n = -*n;
}

int main() {
    int numero = 5;

    inverteSinal(&numero);

    printf("Sinal invertido: %d\n", numero);

    return 0;
}
