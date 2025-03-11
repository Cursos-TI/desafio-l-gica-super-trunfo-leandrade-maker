#include <stdio.h>

int main()
{
  char estado1;
  int codigo1;
  char cidade1[15];
  unsigned long int populacao1;
  int numero_de_pontos_turisticos1;
  float area1;
  float pib1;
  int menuprincipal;

  printf("🕹️ Jogo de cartas Super trunfo!🕹️ \n");

  printf("\n");
  printf("INICIAR JOGO...1\n");
  printf("REGRAS DO JOGO...2\n");
  printf("SAIR DO JOGO...3\n");
  printf("🎮 Selecione uma opção:");
  scanf("%d", &menuprincipal);

  switch (menuprincipal)
  {
  case 1:
    printf("🎴 CARTA DE NÚMERO 01 🎴");
    printf("\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %d", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1); // Corrigido para não usar "&"

    printf("Qual é o número da população? ");
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

    printf("🎴 CARTA DE NÚMERO 02 🎴 \n");

    printf("\n");

    printf("Estado ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2); // Corrigido para não usar "&"

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

    printf("Densidade populacional: %f\n", densidade2 = (populacao2 / area2)); // corrigido para %f
    printf("PIB per capita: %f\n", percapita2 = (pib2 / populacao2));          // corrigido para %f

    printf("Especial: %f", especial2 = (populacao2 + numero_pontos_turisticos2 + area2 + pib2 + percapita2 - densidade2));

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
      printf("🕹️ COMPARAÇÃO DA POPULAÇÃO\n");
      if (populacao1 == populacao2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (populacao1 > populacao2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;
    case 2:
      printf("🕹️ COMPARAÇÃO DOS PONTOS TURÍSTICOS\n");
      if (numero_de_pontos_turisticos1 == numero_pontos_turisticos2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (numero_de_pontos_turisticos1 > numero_pontos_turisticos2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;
    case 3:
      printf("🕹️ COMPARAÇÃO DA ÁREA\n");
      if (area1 == area2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (area1 > area2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;
    case 4:
      printf("🕹️ COMPARAÇÃO DO PIB :D\n");
      if (pib1 == pib2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (pib1 > pib2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;
    case 5:
      printf("🕹️ COMPARAÇÃO DENSIDADE POPULACIONAL\n");
      if (densidade1 == densidade2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (densidade1 < densidade2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;
    case 6:
      printf("🕹️ COMPARAÇÃO DO PIB PER CAPITA \n");
      if (percapita1 == percapita2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (percapita1 > percapita2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;
    case 7:
      printf("🕹️ COMPARAÇÃO DO ESPECIAL\n");
      if (especial1 == especial2)
      {
        printf("Houve um empate ^^\n"); // Corrigido
      }
      else if (especial1 > especial2)
      {
        printf("A carta 1 ganhou :D\n");
      }
      else
      {
        printf("A carta 2 ganhou :D\n");
      }
      break;

    default:
      printf("*** OPÇÃO INVÁLIDA ***\n");
      break;
    }
    break;
  case 2:
    printf("🕹️ REGRAS DO JOGO SUPERTRUNFO 🕹️\n");
    printf("1...Em estado escreva somente uma única letra\n");
    printf("2...Em código escreva apenas números sem ponto(.)\n");
    printf("3...Em área e PIB escreva o valor com apenas um ponto, ex: 5208.7731\n");
    break;
  case 3:
    printf("🕹️ OBRIGADO POR ACESSAR O JOGO DE SUPERTRUNFO! 🕹️\n");
    break;
  default:
    printf("**OPÇÃO INVÁLIDA**\n");
    break;
  }

  return 0;
}