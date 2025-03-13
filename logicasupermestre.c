#include <stdio.h>

int main()
{
    // Declaração das variáveis
    char estado1, estado2;
    char cidade1[15], cidade2[15];
    unsigned long int populacao1, populacao2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, percapita1, percapita2, especial1, especial2;
    int atributo1, atributo2;
    float soma_carta1, soma_carta2;

    printf("🕹️ Jogo de Cartas Super Trunfo! 🕹️\n");

    // Leitura da carta 1
    printf("\n🎴 CARTA 01 🎴\n");
    printf("Estado (digite apenas uma letra): ");
    scanf(" %c", &estado1);
    printf("Nome da cidade (máximo 14 caracteres): ");
    scanf("%14s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);

    // Cálculo dos atributos derivados para carta 1
    densidade1 = area1 > 0 ? populacao1 / area1 : 0;
    percapita1 = populacao1 > 0 ? pib1 / populacao1 : 0;
    especial1 = populacao1 + numero_de_pontos_turisticos1 + area1 + pib1 + percapita1 - densidade1;

    printf("\n📊 Valores calculados para CARTA 01:\n");
    printf("  - Densidade populacional: %.2f\n", densidade1);
    printf("  - PIB per capita: %.2f\n", percapita1);
    printf("  - Especial: %.2f\n", especial1);

    // Leitura da carta 2
    printf("\n🎴 CARTA 02 🎴\n");
    printf("Estado (digite apenas uma letra): ");
    scanf(" %c", &estado2);
    printf("Nome da cidade (máximo 14 caracteres): ");
    scanf("%14s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);

    // Cálculo dos atributos derivados para carta 2
    densidade2 = area2 > 0 ? populacao2 / area2 : 0;
    percapita2 = populacao2 > 0 ? pib2 / populacao2 : 0;
    especial2 = populacao2 + numero_de_pontos_turisticos2 + area2 + pib2 + percapita2 - densidade2;

    printf("\n📊 Valores calculados para CARTA 02:\n");
    printf("  - Densidade populacional: %.2f\n", densidade2);
    printf("  - PIB per capita: %.2f\n", percapita2);
    printf("  - Especial: %.2f\n", especial2);

    // Escolha de dois atributos para comparação
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Número de pontos turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Especial\n");

    // Tratamento para o primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 7) {
        printf("Erro: Opção inválida! Reinicie o jogo e escolha um atributo válido.\n");
        return 1;
    }

    // Tratamento para o segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 7) {
        if (atributo2 < 1 || atributo2 > 7) {
            printf("Erro: Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        } else {
            printf("Erro: Você escolheu o mesmo atributo duas vezes! Tente novamente.\n");
        }
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    }

    // Recuperação dos valores dos atributos escolhidos
    float valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2;

    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = numero_de_pontos_turisticos1; valor1_carta2 = numero_de_pontos_turisticos2; break;
        case 3: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 4: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = percapita1; valor1_carta2 = percapita2; break;
        case 7: valor1_carta1 = especial1; valor1_carta2 = especial2; break;
        default: printf("Erro: Opção inválida no primeiro atributo!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = numero_de_pontos_turisticos1; valor2_carta2 = numero_de_pontos_turisticos2; break;
        case 3: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 4: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = percapita1; valor2_carta2 = percapita2; break;
        case 7: valor2_carta1 = especial1; valor2_carta2 = especial2; break;
        default: printf("Erro: Opção inválida no segundo atributo!\n"); return 1;
    }

    // Cálculo das somas
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    // Exibição do resultado da comparação
    printf("\nRESULTADO DA RODADA:\n");
    printf("Carta 1 (%c - %s): Atributos escolhidos: %.2f e %.2f (Soma: %.2f)\n", estado1, cidade1, valor1_carta1, valor2_carta1, soma_carta1);
    printf("Carta 2 (%c - %s): Atributos escolhidos: %.2f e %.2f (Soma: %.2f)\n", estado2, cidade2, valor1_carta2, valor2_carta2, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("Carta 1 venceu!\n");
    } else if (soma_carta1 < soma_carta2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
