#include <stdio.h>

void imprimirNx(int n, char ch) {
    if (n < 0) return; // exceção
    for (int i = 0; i < n; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    imprimirNx(5, '#');
    return 0;
}