#include <stdio.h>

int main()
{

    // --- Declaração das Variáveis (Carta 1) ---
    char estado1;
    char cod1[10];
    char cidade1[50];
    int populacao1, turistico1;
    float area1, pib1;

    // --- Declaração das Variáveis (Carta 2) ---
    char estado2;
    char cod2[10];
    char cidade2[50];
    int populacao2, turistico2;
    float area2, pib2;

    // Densidade Populacional
    float densidade1, densidade2;

    // PIB per Capita
    float pib_capita1, pib_capita2;

    double Super_Poder1, Super_Poder2;

    // === Cadastro da Carta 1 ===
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", cod1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (Bilhões): ");
    scanf("%f", &pib1);

    printf("Ponto turístico: ");
    scanf("%d", &turistico1);

    // === Cadastro da Carta 2 ===
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf(" %s", cod2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (Bilhões): ");
    scanf("%f", &pib2);

    printf("Ponto turistico: ");
    scanf("%d", &turistico2);

    // Cálculo da Densidade Populacional
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Cálculo da PIB per Capita
    pib_capita1 = (float)pib1 * 1000000000 / populacao1;
    pib_capita2 = (float)pib2 * 1000000000 / populacao2;

    // Cálculo do super poder
    Super_Poder1 = populacao1 + area1 + pib1 * 1000000000.0 + pib_capita1 + densidade1 / 1 + turistico1;
    Super_Poder2 = populacao2 + area2 + pib2 * 1000000000.0 + pib_capita2 + densidade2 / 1 + turistico2;

    // === Exibição dos Dados ===
    printf("\n============================\n");
    printf("      CARTAS CADASTRADAS    \n");
    printf("============================\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Codigo: %s\n", cod1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km2): %.2f\n", area1);
    printf("PIB (Bilhões): %.2f\n", pib1);
    printf("Ponto turístico: %d\n", turistico1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_capita1);
    printf("Super poder é: %.2f\n", Super_Poder1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Codigo: %s\n", cod2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km2): %.2f\n", area2);
    printf("PIB (Bilhões): %.2f\n", pib2);
    printf("Ponto turístico: %d\n", turistico2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_capita2);
    printf("Super poder é: %.2f\n", Super_Poder2);

    return 0;
}