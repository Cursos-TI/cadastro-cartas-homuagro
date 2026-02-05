#include <stdio.h>

int main (){
    
    // Declara as variáveis
    int passo_torre;
    int passo_bispo;
    int passo_rainha;
    char sentido_torre[50];
    char sentido_bispo[50];
    char sentido_rainha[50];

    // Registrar passos e sentidos de Torre
    printf("Quantos passos para a movimentação de Torre: ");
    scanf("%d", &passo_torre);
    printf("Qual é o sentido: ");
    scanf(" %[^\n]", sentido_torre);

    // Movimentação de Torre
    printf("\n--- MOVIMENTAÇÃO DE TORRE ---\n");
    for (int i = 0; i < passo_torre; i++)
    {
        printf("%s\n", sentido_torre);
    }

    // Registrar passos e sentidos de Bispo
    printf("\nQuantos passos para a movimentação de Bispo: ");
    scanf("%d", &passo_bispo);
    printf("Qual é o sentido: ");
    scanf(" %[^\n]", sentido_bispo);

    // Movimentação de Bispo
    printf("\n--- MOVIMENTAÇÃO DE BISPO ---\n");

    int b = 0;
    while (b < passo_bispo)
    {
        printf("%s\n", sentido_bispo);
        b++;
    }

    // Registrar passos e sentidos de Rainha
    printf("\nQuantos passos para a movimentação de Rainha: ");
    scanf("%d", &passo_rainha);
    printf("Qual é o sentido: ");
    scanf(" %[^\n]", sentido_rainha);

    // Movimentação de Rainha
    printf("\n--- MOVIMENTAÇÃO DE RAINHA ---\n");

    int r = 0;

    do
    {
        printf("%s\n", sentido_rainha);
        r++;
    } while (r < passo_rainha);

    return 0;
    
}