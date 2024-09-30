#include <stdio.h>

void imprimirNx(int n, char ch) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    imprimirNx(3, '#'); 
    return 0;
}