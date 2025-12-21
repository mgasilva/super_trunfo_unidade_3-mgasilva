#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[32];
    char codigo[32][4];
    char nome_cidade[32][64];
    int populacao[32];
    float area[32];
    float pib[32];
    int npontos[32];
    float denspop[32];
    float ppc[32];
    float superpoder[32];
    
  // Área para entrada de dados

    printf("Entre com o código do estado da carta 1: ");
    scanf(" %c", &estado[0]);
    printf("Entre com o código da cidade da carta 1: ");
    scanf(" %3[^\n]", codigo[0]);
    printf("Entre com o nome da cidade da carta 1: ");
    scanf(" %63[^\n]", nome_cidade[0]);
    printf("Entre com a população da cidade da carta 1: ");
    scanf(" %d", &populacao[0]);
    printf("Entre com a área em km² da cidade da carta 1: ");
    scanf(" %f", &area[0]);
    printf("Entre com o PIB anual em milhares de Reais da cidade da carta 1: ");
    scanf(" %f", &pib[0]);
    printf("Entre com o número de pontos turísticos da carta 1: ");
    scanf(" %d", &npontos[0]);
    denspop[0] = populacao[0]/area[0];
    ppc[0] = (pib[0]/populacao[0])*1000;
    superpoder[0] = populacao[0]+area[0]+pib[0]+npontos[0]+denspop[0]+ppc[0];
    printf("\n");
    
    printf("Entre com o código do estado da carta 2: ");
    scanf(" %c", &estado[1]);
    printf("Entre com o código da cidade da carta 2: ");
    scanf(" %3[^\n]", codigo[1]);
    printf("Entre com o nome da cidade da carta 2: ");
    scanf(" %63[^\n]", nome_cidade[1]);
    printf("Entre com a população da cidade da carta 2: ");
    scanf(" %d", &populacao[1]);
    printf("Entre com a área em km² da cidade da carta 2: ");
    scanf(" %f", &area[1]);
    printf("Entre com o PIB anual em milhares de Reais da cidade da carta 2: ");
    scanf(" %f", &pib[1]);
    printf("Entre com o número de pontos turísticos da carta 2: ");
    scanf(" %d", &npontos[1]);
    denspop[1] = populacao[1]/area[1];
    ppc[1] = (pib[1]/populacao[1])*1000;
    superpoder[1] = populacao[1]+area[1]+pib[1]+npontos[1]+denspop[1]+ppc[1];
    printf("\n");

    // Área para exibição dos dados da cidade
    printf("Estado da carta 1: %c\n", estado[0]);
    printf("Código da carta 1: %s\n", codigo[0]);
    printf("Nome da cidade da carta 1: %s\n", nome_cidade[0]);
    printf("População da cidade da carta 1: %d\n", populacao[0]);
    printf("Área da cidade da carta 1 (km²): %f\n", area[0]);
    printf("PIB da cidade da carta 1 (em milhares de Reais): %f\n", pib[0]);
    printf("Número de pontos turísticos da cidade da carta 1: %d\n", npontos[0]);
    printf("Densidade populacional da cidade da carta 1 (hab/km²): %f\n", denspop[0]);
    printf("PIB per capita da cidade da carta 1 (reais/hab): %f\n", ppc[0]);
    printf("Superpoder da cidade da carta 1: %f\n", superpoder[0]);
    printf("\n");
    
    printf("Estado da carta 2: %c\n", estado[1]);
    printf("Código da carta 2: %s\n", codigo[1]);
    printf("Nome da cidade da carta 2: %s\n", nome_cidade[1]);
    printf("População da cidade da carta 2: %d\n", populacao[1]);
    printf("Área da cidade da carta 2 (km²): %f\n", area[1]);
    printf("PIB da cidade da carta 2 (em milhares de Reais): %f\n", pib[1]);
    printf("Número de pontos turísticos da cidade da carta 2: %d\n", npontos[1]);
    printf("Densidade populacional da cidade da carta 2 (hab/km²): %f\n", denspop[1]);
    printf("PIB per capita da cidade da carta 2 (reais/hab): %f\n", ppc[1]);
    printf("Superpoder da cidade da carta 2: %f\n", superpoder[1]);
    printf("\n");
    
    printf("Comparações:\n\n");

    printf("População:\n");
    printf("População da cidade da carta 1: %d\n", populacao[0]);
    printf("População da cidade da carta 2: %d\n", populacao[1]);
    if (populacao[0] > populacao[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (populacao[1] > populacao[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }

    printf("Área\n");
    printf("Área da cidade da carta 1: %d\n", area[0]);
    printf("Área da cidade da carta 2: %d\n", area[1]);
    if (area[0] > area[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (area[1] > area[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }

    printf("PIB:\n");
    printf("PIB da cidade da carta 1: %d\n", pib[0]);
    printf("PIB da cidade da carta 2: %d\n", pib[1]);
    if (pib[0] > pib[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (pob[1] > pib[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }

    printf("Número de pontos turísticos:\n");
    printf("Número de pontos turísticos da cidade da carta 1: %d\n", npontos[0]);
    printf("Número de pontos turísticos da cidade da carta 2: %d\n", npontos[1]);
    if (npontos[0] > npontos[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (npontos[1] > npontos[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }

    printf("Densidade Populacional:\n");
    printf("Densidade Populacional da cidade da carta 1: %d\n", denspop[0]);
    printf("Densidade Populacional da cidade da carta 2: %d\n", populacao[1]);
    if (populacao[0] > populacao[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (populacao[1] > populacao[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }
    printf("População:\n");
    printf("População da cidade da carta 1: %d\n", populacao[0]);
    printf("População da cidade da carta 2: %d\n", populacao[1]);
    if (populacao[0] > populacao[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (populacao[1] > populacao[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }


return 0;
}
