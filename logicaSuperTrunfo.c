#include <stdio.h>
#include <stdlib.h> // Necessária para rand() e srand()
#include <time.h>   // Necessária para time()

int main()
{
  // Declaração das variáveis
  char estado1; // Correção: leitura de um único caractere
  int codigo1;
  char cidade1[15]; // Nome da cidade limitado a 14 caracteres
  unsigned long int populacao1;
  int numero_de_pontos_turisticos1;
  float area1, pib1;

  int menuprincipal;

  printf("🕹️ Jogo de cartas Super Trunfo! 🕹️ \n");

  // Menu principal
  printf("\n");
  printf("1 - INICIAR JOGO\n");
  printf("2 - REGRAS DO JOGO\n");
  printf("3 - SAIR DO JOGO\n");
  printf("🎮 Selecione uma opção: ");
  scanf("%d", &menuprincipal); // Correção: leitura do menu

  switch (menuprincipal)
  {
  case 1:
    // Leitura dos dados da primeira carta
    printf("🎴 CARTA DE NÚMERO 01 🎴\n");
    printf("Estado (digite apenas uma letra): ");
    scanf(" %c", &estado1); // Correção: adicionado espaço para consumir o '\n'

    printf("Código: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade (máximo 14 caracteres): ");
    scanf("%14s", cidade1); // Correção: limitado o tamanho da entrada

    printf("Qual é o número da população? ");
    scanf("%lu", &populacao1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Qual a área (em metros quadrados)? ");
    scanf("%f", &area1);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib1);

    // Cálculos corrigidos para a primeira carta
    float densidade1, percapita1, especial1;

    if (area1 != 0) // Verifica se a área é diferente de zero
    {
      densidade1 = (float)populacao1 / area1; // Correção: divisão por float
      printf("Densidade populacional: %.2f\n", densidade1);
    }
    else
    {
      printf("Erro: A área não pode ser zero.\n");
      return 1; // Finaliza o programa em caso de erro
    }

    if (populacao1 != 0) // Verifica se a população é diferente de zero
    {
      percapita1 = pib1 / (float)populacao1; // Correção: divisão por float
      printf("PIB per capita: %.2f\n", percapita1);
    }
    else
    {
      printf("Erro: A população não pode ser zero.\n");
      return 1;
    }

    // Fórmula "Especial" revisada (atenção: ajuste se necessário)
    especial1 = (populacao1 + numero_de_pontos_turisticos1 + area1 + pib1 + percapita1 - densidade1);
    printf("Especial: %.2f\n", especial1);

    // Repetir o processo para a segunda carta
    char estado2, cidade2[15];
    unsigned long int populacao2;
    int codigo2, numero_de_pontos_turisticos2;
    float area2, pib2;

    printf("\n🎴 CARTA DE NÚMERO 02 🎴\n");
    printf("Estado (digite apenas uma letra): ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade (máximo 14 caracteres): ");
    scanf("%14s", cidade2);

    printf("Qual é o número da população? ");
    scanf("%lu", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Qual a área (em metros quadrados)? ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib2);

    // Cálculos corrigidos para a segunda carta
    float densidade2, percapita2, especial2;

    if (area2 != 0)
    {
      densidade2 = (float)populacao2 / area2;
      printf("Densidade populacional: %.2f\n", densidade2);
    }
    else
    {
      printf("Erro: A área não pode ser zero.\n");
      return 1;
    }

    if (populacao2 != 0)
    {
      percapita2 = pib2 / (float)populacao2;
      printf("PIB per capita: %.2f\n", percapita2);
    }
    else
    {
      printf("Erro: A população não pode ser zero.\n");
      return 1;
    }

    especial2 = (populacao2 + numero_de_pontos_turisticos2 + area2 + pib2 + percapita2 - densidade2);
    printf("Especial: %.2f\n", especial2);

    // Comparação dos atributos
    int atributo;

    printf("\n## COMPARE O ATRIBUTO QUE ACHAR MELHOR ##\n");
    printf("1... População\n");
    printf("2... Número de pontos turísticos\n");
    printf("3... Área\n");
    printf("4... PIB\n");
    printf("5... Densidade populacional\n");
    printf("6... PIB per capita\n");
    printf("7... Especial\n");
    printf("Escolha um atributo: ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
      printf("🕹️ Comparação de População\n");
      if (populacao1 == populacao2)
        printf("Empate!\n");
      else if (populacao1 > populacao2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    case 2:
      printf("🕹️ Comparação de Pontos Turísticos\n");
      if (numero_de_pontos_turisticos1 == numero_de_pontos_turisticos2)
        printf("Empate!\n");
      else if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    case 3:
      printf("🕹️ Comparação de Área\n");
      if (area1 == area2)
        printf("Empate!\n");
      else if (area1 > area2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    case 4:
      printf("🕹️ Comparação de PIB\n");
      if (pib1 == pib2)
        printf("Empate!\n");
      else if (pib1 > pib2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    case 5:
      printf("🕹️ Comparação de Densidade Populacional\n");
      if (densidade1 == densidade2)
        printf("Empate!\n");
      else if (densidade1 > densidade2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    case 6:
      printf("🕹️ Comparação de PIB per capita\n");
      if (percapita1 == percapita2)
        printf("Empate!\n");
      else if (percapita1 > percapita2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    case 7:
      printf("🕹️ Comparação de Especial\n");
      if (especial1 == especial2)
        printf("Empate!\n");
      else if (especial1 > especial2)
        printf("A carta 1 ganhou!\n");
      else
        printf("A carta 2 ganhou!\n");
      break;
    default:
      printf("Atributo inválido!\n");
      break;
    }
    break;

  case 2:
    printf("🕹️ REGRAS DO JOGO SUPER TRUNFO 🕹️\n");
    printf("1. Em 'Estado', digite apenas uma única letra.\n");
    printf("2. Em 'Código', digite apenas números inteiros.\n");
    printf("3. Em 'Área' e 'PIB', digite valores com ponto decimal (ex: 5208.77).\n");
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