#include <stdio.h>

int main()
{
    // --- Declaração das Variáveis ---
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;

    // --- Cadastro do País 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("País 1: ");
    scanf(" %[^\n]", pais1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km2): ");
    scanf("%f", &area1);

    printf("Pontos turísticos: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;

    // --- Cadastro do País 2 ---
    printf("--- Cadastro do País 2 ---\n");
    printf("País 2: ");
    scanf(" %[^\n]", pais2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km2):");
    scanf("%f", &area2);

    printf("Ponto turístico: ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;

    // --- Declarar a Variável para Switch ---
    int opcao;
    int atributo1;
    int atributo2;
    char *resultado1;
    char *resultado2;

    // --- Escolhe a opção ---
    printf(" ---  As Opções ---");
    printf("Escolha uma opção:\n");
    printf("1. Exibir os dados.\n");
    printf("2. Comparar os atributos.\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n--- País 1 ---\n");
        printf("País: %s\n", pais1);
        printf("População: %d\n", populacao1);
        printf("Área (km2): %.2f\n", area1);
        printf("Ponto turístico: %d\n", turistico1);
        printf("Densidade Populacional: %.2f\n", densidade1);

        printf("\n--- País 2 ---\n");
        printf("País: %s\n", pais2);
        printf("População: %d\n", populacao2);
        printf("Área (km2): %.2f\n", area2);
        printf("Ponto turístico: %d\n", turistico2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        break;
    case 2:
        // Escolhe os atributos:
        printf("Escolhe dois atributos para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Ponto turístico\n");
        printf("4. Densidade Populacional\n");

        printf("O atributo 1: ");
        scanf("%d", &atributo1);
        printf("O atributo 2: ");
        scanf("%d", &atributo2);

        // Quando escolheu 2 atributos iguais
        if (atributo1 == atributo2)
        {
            printf("Por favor, escolhe dois atributos diferentes.");
        }
        else
        {
          
        	// Comparação do atributo 1        	
            switch (atributo1)
            {
            case 1:
                if (populacao1 == populacao2)
                {
                    printf("População: Empate!\n");
                }
                else
                {
                    resultado1 = (populacao1 > populacao2) ? "%s", pais1 : "%s", pais2;
                    printf("População: %s venceu!\n", resultado1);
                }
                break;

            case 2:
                if (area1 == area2)
                {
                    printf("Área: Empate!\n");
                }
                else
                {
                    resultado1 = (area1 > area2) ? "%s", pais1 : "%s", pais2;
                    printf("Área: %s venceu!\n", resultado1);
                }
                break;

            case 3:
                if (turistico1 == turistico2)
                {
                    printf("Ponto Turístico: Empate!\n");
                }
                else
                {
                    resultado1 = (area1 > area2) ? "%s", pais1 : "%s", pais2;
                    printf("Ponto Turístico: %s venceu!\n", resultado1);
                }
                break;

            case 4:
                if (densidade1 == densidade2)
                {
                    printf("Densidade: Empate!\n");
                }
                else
                {
                    resultado1 = (densidade2 > densidade1) ? "%s", pais1 : "%s", pais2;
                    printf("Densidade: %s venceu!\n", resultado1);
                }
                break;

            default:
                printf("Opção do Atributo 1 inválida\n");
            }
          
        	// Comparação do atributo 2  
            switch (atributo2)

            {
            case 1:
                if (populacao1 == populacao2)
                {
                    printf("População: Empate!\n");
                }
                else
                {
                    resultado2 = (populacao1 > populacao2) ? "%s", pais1 : "%s", pais2;
                    printf("População: %s venceu!\n", resultado2);
                }
                break;

            case 2:
                if (area1 == area2)
                {
                    printf("Área: Empate!\n");
                }
                else
                {
                    resultado2 = (area1 > area2) ? "%s", pais1 : "%s", pais2;
                    printf("Área: %s venceu!\n", resultado2);
                }
                break;

            case 3:
                if (turistico1 == turistico2)
                {
                    printf("Ponto Turístico: Empate!\n");
                }
                else
                {
                    resultado2 = (area1 > area2) ? "%s", pais1 : "%s", pais2;
                    printf("Ponto Turístico: %s venceu!\n", resultado2);
                }
                break;

            case 4:
                if (densidade1 == densidade2)
                {
                    printf("Densidade: Empate!\n");
                }
                else
                {
                    resultado2 = (densidade2 > densidade1) ? "%s", pais1 : "%s", pais2;
                    printf("Densidade: %s venceu!\n", resultado2);
                }
                break;

            default:
                printf("Opção do Atributo 2 inválida\n");
            }
        }
        break;
    default:
        printf("Opção inválida\n");
    }
    return 0;
}
