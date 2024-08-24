#include <stdio.h>

int main() {
    char string[50] = "avaliacao 2";
    int i = 0;

    while (string[i] != '\0') {
        printf("string[%d] : %c\n", i, string[i]);
        i++;
    }

    return 0;
}

