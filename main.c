#include <stdio.h>
#include <stdlib.h>

struct usuario {
  char nome[50];
  int idade;
  char sexo;
};

void valida_cadastro(struct usuario usuario[], int i) {
  FILE * arquivo = fopen("arquivo.txt", "a");
  fprintf(arquivo, "%s, %i, %c\n", usuario[i].nome, usuario[i].idade, usuario[i].sexo);
  fclose(arquivo);
}

void cadastro(int i) {
  struct usuario usuario[i];
  printf("Digite seu nome: ");
  scanf("%s", usuario[i].nome);
  printf("Digite sua idade: ");
  scanf("%i", &usuario[i].idade);
  printf("Digite seu sexo(M/F): ");
  scanf(" %c", &usuario[i].sexo);

  valida_cadastro(usuario, i);
}

void menu() {
  printf("MENU DE CADASTRO\n");
  printf("1 - Cadastrar\n");
  printf("2 - Alterar cadastro\n");
  printf("3 - Excluir cadastro\n");
  printf("4 - Sair\n");

  int opcao, i = 0;
  scanf("%i", &opcao);
  switch (opcao) {
  case 1:
    cadastro(i);
    break;
  }
}

int main() {
  menu();

  return 0;
}
