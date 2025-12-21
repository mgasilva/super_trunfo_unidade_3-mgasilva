#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void cleanbuff();

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[32];
    char codigo[32][4];
    
  // Área para entrada de dados

    printf("Entre com o estado da carta 1: ");
    scanf(" %c", &estado[0]);
  
    printf("entre com o código da carta 1: ");
    scanf(" %s", codigo[0]);
    
    printf("\n");
    
  // Área para exibição dos dados da cidade
    printf("Estado da carta 1: %c\n", estado[0]);
    printf("Código da carta 1: %s\n", codigo[0]);
return 0;
} 

void cleanbuff(void) {
  int c;
    while ((c = getchar()) != '\n' && c != EOF);
}