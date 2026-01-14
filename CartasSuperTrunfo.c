#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
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

  // Área para entrada de dados
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
  // Área para exibição dos dados da cidade
  // Exibição Carta 1
  printf("\nCarta 1:\n");
  printf("Codigo: %s\n", cod1);
  printf("Estado: %c\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área (km2): %.2f\n", area1);
  printf("PIB (Bilhões): %.2f\n", pib1);
  printf("Ponto turístico: %d\n", turistico1);

  // Exibição Carta 2
  printf("\nCarta 2:\n");
  printf("Codigo: %s\n", cod2);
  printf("Estado: %c\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área (km2): %.2f\n", area2);
  printf("PIB (Bilhões): %.2f\n", pib2);
  printf("Ponto turístico: %d\n", turistico2);
return 0;
} 
