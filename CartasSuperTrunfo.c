#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[32];
    char codigo[32][4];
    char nome_cidade[32][64];
    int populacao[32];
    double area[32];
    double pib[32];
    int npontos[32];
    double denspop[32];
    double ppc[32];
    double superpoder[32];
    int escolha1 = 0;
    int escolha2 = 0;
    int criterios[2][2];
    
  // Área para cadastro das cartas (hard-coded):

    estado[0] = 'E';
    strcpy(codigo[0], "E01");
    strcpy(nome_cidade[0], "Salvador da Bahia");
    populacao[0] = 2147678;
    area[0] = 693.45;
    pib[0] = 76699000;
    npontos[0] = 100;
    denspop[0] = populacao[0]/area[0];
    ppc[0] = (pib[0]/populacao[0])*1000;
    superpoder[0] = populacao[0]+area[0]+pib[0]+npontos[0]-denspop[0]+ppc[0];
    printf("\n");
    
    estado[1] = 'A';
    strcpy(codigo[1], "A01");
    strcpy(nome_cidade[1], "Rio Branco");
    populacao[1] = 364756;
    area[1] = 8835.15;
    pib[1] = 10955674.857;
    npontos[1] = 40;
    denspop[1] = populacao[1]/area[1];
    ppc[1] = (pib[1]/populacao[1])*1000;
    superpoder[1] = populacao[1]+area[1]+pib[1]+npontos[1]-denspop[1]+ppc[1];
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
    printf("\n\n");
    
    printf("Comparações:\n\n");

    printf("Escolha os critérios de comparação conforme o código:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional (vence a menor)\n");
    printf("6. PIB per capita\n");
    printf("7. Superpoder\n\n");

    //escolha do primeiro critério
    while(escolha1 <1 || escolha1 > 7)
    {
        printf("Digite o número do primeiro critério: ");
        scanf("%d", &escolha1);
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
        if(escolha1 < 1 || escolha1 > 7)
        {
          printf("Escolha inválida. Digite um número de 1 a 7.\n");
        }
      }
    switch (escolha1)
    {
      case 1:
        printf("Você escolheu o critério: população.\n\n");
        criterios[0][0] = populacao[0];
        criterios[0][1] = populacao[1];
        break;
      case 2:
        printf("Você escolheu o critério: área.\n\n");
        criterios[0][0] = area[0];
        criterios[0][1] = area[1];
        break;
      case 3:
        printf("Você escolheu o critério: PIB.\n\n");
        criterios[0][0] = pib[0];
        criterios[0][1] = pib[1];
        break;
      case 4:
        printf("Você escolheu o critério: número de pontos turísticos.\n\n");
        criterios[0][0] = npontos[0];
        criterios[0][1] = npontos[1];
        break;
      case 5:
        printf("Você escolheu o critério: densidade populacional (vence a menor).\n\n");
        criterios[0][0] = -denspop[0];
        criterios[0][1] = -denspop[1];
        break;
      case 6:
        printf("Você escolheu o critério: PIB per capita.\n\n");
        criterios[0][0] = ppc[0];
        criterios[0][1] = ppc[1];
        break;
      case 7:
        printf("Você escolheu o critério: superpoder.\n\n");
        criterios[0][0] = superpoder[0];
        criterios[0][1] = superpoder[1];
        break;
      default:
        printf("Você não escolheu um critério. Ficará em desvantagem\n");
        escolha1 = 1;
        criterios[0][0] = 0;
        criterios[0][1] = 0;
    }

    //escolha do segundo critério
    while(escolha2 <1 || escolha2 > 7 || escolha2 == escolha1)
    {
        printf("Digite o número do segundo critério: ");
        scanf("%d", &escolha2);
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
        if(escolha2 < 1 || escolha1 > 2)
        {
          printf("Escolha inválida. Digite um número de 1 a 7.\n");
        }
        if(escolha2 == escolha1)
        {
          printf("Escolha inválida.  O segundo critério deve ser diferente do primeiro.\n");
        }
      }
    switch (escolha2)
    {
      case 1:
        printf("Você escolheu o critério: população.\n\n");
        criterios[1][0] = populacao[0];
        criterios[1][1] = populacao[1];
        break;
      case 2:
        printf("Você escolheu o critério: área.\n\n");
        criterios[1][0] = area[0];
        criterios[1][1] = area[1];
        break;
      case 3:
        printf("Você escolheu o critério: PIB.\n\n");
        criterios[1][0] = pib[0];
        criterios[1][1] = pib[1];
        break;
      case 4:
        printf("Você escolheu o critério: número de pontos turísticos.\n\n");
        criterios[1][0] = npontos[0];
        criterios[1][1] = npontos[1];
        break;
      case 5:
        printf("Você escolheu o critério: densidade populacional (vence a menor).\n\n");
        criterios[1][0] = -denspop[0];
        criterios[1][1] = -denspop[1];
        break;
      case 6:
        printf("Você escolheu o critério: PIB per capita.\n\n");
        criterios[1][0] = ppc[0];
        criterios[1][1] = ppc[1];
        break;
      case 7:
        printf("Você escolheu o critério: superpoder.\n\n");
        criterios[1][0] = superpoder[0];
        criterios[1][1] = superpoder[1];
        break;
      default:
        printf("Você não escolheu um critério. Ficará em desvantagem\n");
        escolha2 = 1;
        criterios[1][0] = 0;
        criterios[1][1] = 0;
    }



    //comparações
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
    printf("\n");

    printf("Área\n");
    printf("Área da cidade da carta 1: %f\n", area[0]);
    printf("Área da cidade da carta 2: %f\n", area[1]);
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
    printf("\n");

    printf("PIB:\n");
    printf("PIB da cidade da carta 1: %f\n", pib[0]);
    printf("PIB da cidade da carta 2: %f\n", pib[1]);
    if (pib[0] > pib[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (pib[1] > pib[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }
    printf("\n");

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
    printf("\n");

    printf("Densidade Populacional:\n");
    printf("Densidade Populacional da cidade da carta 1: %f\n", denspop[0]);
    printf("Densidade Populacional da cidade da carta 2: %f\n", denspop[1]);
    if (denspop[0] < denspop[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (denspop[1] < denspop[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }
    printf("\n");

    printf("PIB per capita:\n");
    printf("PIB per capita da cidade da carta 1: %f\n", ppc[0]);
    printf("PIB per capita da cidade da carta 2: %f\n", ppc[1]);
    if (ppc[0] > ppc[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (ppc[1] > ppc[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }
    printf("\n");

    printf("Superpoder:\n");
    printf("Superpoder da cidade da carta 1: %f\n", superpoder[0]);
    printf("Superpoder da cidade da carta 2: %f\n", superpoder[1]);
    if (superpoder[0] > superpoder[1])
    {
      printf("A cidade 1 (%s) ganhou.\n",nome_cidade[0]);
    }
    else if (superpoder[1] > superpoder[0])
    {
      printf("A cidade 2 (%s) ganhou.\n", nome_cidade[1]);
    }
    else
    {
      printf("Deu empate.\n");
    }


return 0;
}
