/*#include <stdio.h>

int main() {
    char string[50] = "Exercicio de APC II";
    int i = 0;

    while (string[i] != '\0') {
        printf("string[%d] : %c\n", i, string[i]);
        i++;
    }
    

    return 0;
}*/


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

/*#include <stdio.h>

int main() {
  int v[10] = {3, 5, 6, 2, 8, 9, 1, 5, 0, 7};
  printf("Valores\n");
  printf("v[0] = %d, *(v+0) = %d\n", v[0], *v);
  printf("v[1] = %d, *(v+1) = %d\n", v[1], *(v+1));
  printf("v[2] = %d, *(v+2) = %d\n", v[2], *(v+2));
  printf("Endereços\n");
  printf("&v[0] = %p, v+0 = %p\n", &v[0], v);
  printf("&v[1] = %p, v+1 = %p\n", &v[1], v+1);
  printf("&v[2] = %p, v+2 = %p\n", &v[2], v+2);

  int *p = v;
  printf("Valores\n");
  printf("p[0] = %d, *(v+0) = %d\n", p[0], *p);
  printf("p[1] = %d, *(v+1) = %d\n", p[1], *(p+1));
  printf("p[2] = %d, *(v+2) = %d\n", p[2], *(p+2));
  printf("Endereços\n");
  printf("&p[0] = %p, v+0 = %p\n", &p[0], p);
  printf("&p[1] = %p, v+1 = %p\n", &p[1], p+1);
  printf("&p[2] = %p, v+2 = %p\n", &p[2], p+2);

  return 0;
}*/