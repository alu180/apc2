

#include <stdio.h>

int main() {
    char string[50] = "Exercicio de APC II";
    int i = 0;
    char *ptr = string;
    char caractere;
    char *ultima_ocorrencia = NULL;


    while (string[i] != '\0') {
        printf("string[%d] : %c\n", i, string[i]);
        i++;
    }

    printf("Digite o caractere que deseja buscar: ");
    scanf("%c", &caractere);


    while (*ptr != '\0') {
        if (*ptr == caractere) {
            ultima_ocorrencia = ptr;
        }
        ptr++;
    }

    if (ultima_ocorrencia != NULL) {
        printf("A última ocorrência do caractere '%c' está na posição %ld endereco: %p.\n", caractere, ultima_ocorrencia - string, ptr);
    } else {
        printf("Caractere não encontrado.\n");
    }

    return 0;
}

