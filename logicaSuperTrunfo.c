#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
  /* O código é um esqueleto para o desafio Super Trunfo - Países, com foco na comparação de cartas de cidades.
  A implementação envolve:

  Definição das variáveis: Para armazenar propriedades das cidades, com base no código do primeiro desafio.
  Cadastro das cartas: Solicitar dados das cidades usando scanf para capturar entradas.
  Comparação de cartas: Usar estruturas if para comparar atributos como população, área, PIB, etc.
  Exibição dos resultados: Mostrar qual cidade venceu e com base em qual atributo.
  */

  // Nivel novato do tema 2 do Super trunfo, ainda seguindo a base das cartas no tema 1.
  // Desenvolvendo a lógica do jogo.

  // Desafio Super Trunfo - Países: Base para o sistema de cadastro de cartas de cidades.

  char estado1;
  int codigo1;
  char cidade1[15];
  unsigned long int populacao1;
  int numero_de_pontos_turisticos1;
  float area1;
  float pib1;

  printf("Jogo de cartas Super trunfo! \n");

  printf("\n");

  printf("CARTA DE NÚMERO 01");
  printf("\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Código: ");
  scanf(" %d", &codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %s", &cidade1);

  printf("Qual é o número da populaçao? ");
  scanf(" %lu", &populacao1);

  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &numero_de_pontos_turisticos1);

  printf("Qual a área em metro quadrado: ");
  scanf(" %f", &area1);

  printf("Digite o PIB do país: ");
  scanf(" %f", &pib1);

  float densidade1;
  float percapita1;

  float especial1;

  printf("Densidade populacional: %f \n", densidade1 = (populacao1 / area1));
  printf("PIB per capita: %f \n", percapita1 = (pib1 / populacao1));

  printf("Especial: %f", especial1 = (populacao1 + numero_de_pontos_turisticos1 + area1 + pib1 + percapita1 - densidade1));

  char estado2, cidade2[20];
  unsigned long int populacao2;
  int codigo2, numero_pontos_turisticos2;
  float area2, pib2;

  printf("\n");

  printf("CARTA DE NÚMERO 02 \n");

  printf("\n");

  printf("Estado ");
  scanf(" %c", &estado2);

  printf("Código: ");
  scanf(" %d", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", &cidade2);

  printf("Qual é o número da população? ");
  scanf(" %lu", &populacao2);

  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &numero_pontos_turisticos2);

  printf("Qual a área em metros quadrados? ");
  scanf(" %f", &area2);

  printf("Digite o PIB do País: ");
  scanf(" %f", &pib2);

  float densidade2;
  float percapita2;

  float especial2;

  printf("Desnidade populacional: %f\n", densidade2 = (populacao2 / area2)); // corrigido para %f
  printf("PIB per capita: %f\n", percapita2 = (pib2 / populacao2));          // corrigido para %f

  printf("Especial: %f", especial2 = (populacao2 + numero_pontos_turisticos2 + area2 + pib2 + percapita2 - densidade2));
  /*
      printf("\n");
      printf("COMPARAÇÕES DE CARTAS!\n");
      printf("\n");

      printf("Para cada comparação, se o resultado for 1, a carta 1 ganhou, se for 0, a carta 2 ganhou \n");

      printf("População: %d \n", populacao1 > populacao2);
      printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos1 > numero_pontos_turisticos2);
      printf("Area: %d \n", area1 > area2);
      printf("PIB: %d \n", pib1 > pib2);
      printf("Densidade populacional: %d \n", densidade1 < densidade2);
      printf("PIB per capita: %d \n", percapita1 > percapita2);


    Comparação de cartas usando if-else - nivel novato tema 2
      Exibidas as comparações em printf se uma carta ganhou e se não qual ganhou.

      printf("\n");
      printf("COMPARAÇÕES DE CARTAS!\n");
      printf("\n");


      if (populacao1 > populacao2)
      {
        printf("Com maior número a população da carta 1 venceu!\n");
      }
      else
      {
        printf("Com maior número a população da carta 2 venceu!\n");
      }

      if (area1 > area2)
      {
        printf("com maior área a carta 1 venceu!\n");
      }
      else
      {
        printf("com maior área a carta 2 venceu!\n");
      }

      if (numero_de_pontos_turisticos1 > numero_pontos_turisticos2)
      {
        printf("Com maior número de pontos turisticos a carta 1 venceu!\n");
      }
      else
      {
        printf("Com maior número de pontos turisticos a carta 2 venceu!\n");
      }

      if (pib1 > pib2)
      {
        printf("Com maior PIB a carta 1 venceu!\n");
      }
      else
      {
        printf("Com maior número de pontos turisticos a carta 2 venceu!\n");
      }

      if (densidade1 < densidade2)
      {
          printf("Densidade populacional da carta 1 é menor, portanto leva essa rodada!\n");
      }
      else
      {
        printf("Densidade populacional da carta 2 é menor, portanto leva essa rodada!\n");
      }

      if (percapita1 > percapita2)
      {
        printf("Com maior PIB per capita a carta 1 ganha \n");
      }

      else
      {
        printf("Com maior PIB per capita a carta 2 ganha \n");
      }

      if (especial1 > especial2)
      {
        printf("A carta 1 possui maior poder especial, então vence!\n");
      }
      else
      {
        printf("A carta 2 possui maior poder especial, então vence!\n");
      }
      */

  int atributo;

  printf("\n");
  printf("##COMPARE O ATRIBUTO QUE ACHAR MELHOR##\n");
  printf("Escolha um atributo:\n");
  printf("1... População\n");
  printf("2... Número de pontos turísticos\n");
  printf("3... Área\n");
  printf("4... PIB\n");
  printf("5... Densidade populacional\n");
  printf("6... PIB per capita\n");
  printf("7... Especial\n");
  scanf("%d", &atributo);

  switch (atributo)
  {
  case 1:
    printf("COMPARAÇÃO DA POPULAÇÃO...\n");
    if (populacao1 == populacao2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (populacao1 > populacao2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
    break;
  case 2:
    printf("COMPARAÇÃO DOS PONTOS TURÍSTICOS...\n");
    if (numero_de_pontos_turisticos1 == numero_pontos_turisticos2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (numero_de_pontos_turisticos1 > numero_pontos_turisticos2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
  case 3:
    printf("COMPARAÇÃO DA ÁREA :D\n");
    if (area1 == area2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (area1 > area2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
    break;
  case 4:
    printf("COMPARAÇÃO DO PIB :D\n");
    if (pib1 == pib2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (pib1 > pib2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
    break;
  case 5:
    printf("COMPARAÇÃO DENSIDADE POPULACIONAL :D\n");
    if (densidade1 == densidade2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (densidade1 > densidade2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
    break;
  case 6:
    printf("COMPARAÇÃO DO PIB PER CAPITA :D\n");
    if (percapita1 == percapita2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (percapita1 > percapita2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
    break;
  case 7:
    printf("COMPARAÇÃO DA POPULAÇÃO :D\n");
    if (especial1 == especial2)
    {
      printf("Ouve um empate ^^\n");
    }
    else if (especial1 > especial2)
    {
      printf("## A carta 1 ganhou :D\n");
    }
    else
    {
      printf("## A carta 2 ganhou :D\n");
    }
    break;

  default:
    printf("*** OPÇÃO INVÁLIDA ***");
    break;
  }

  return 0;
}
