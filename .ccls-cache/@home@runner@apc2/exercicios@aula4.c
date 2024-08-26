#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           //   4 bytes
  char genero; // M, F //   1 byte
} pessoa1, pessoa2;

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};


  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  struct Pessoa pessoa2;
  //pessoa2 = {.nome = "Maria", .idade = 19, .genero = 'F'};
  // Obtenha do console o nome, a idade e o gênero da pessoa 2.
  //sscanf("maria clara","%s", pessoa2.nome);
  printf("introduza o nome:");
  scanf("%99[^\n]", pessoa2.nome);
  
  //sscanf("18", "%d" , &pessoa2.idade);
  printf("introduza a idade:");
  scanf("%d%*c", &pessoa2.idade);
  
  //sscanf("f", "%c" , &pessoa2.genero);
  printf("introduza o genero:");
  scanf("%c", &pessoa2.genero);

  // Em seguida exiba esses dados de volta pro console.
  
  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);


  return 0;
}