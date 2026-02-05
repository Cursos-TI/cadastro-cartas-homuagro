#include <stdio.h>

int main (){
    
    // Declara as variáveis
    int passo_cavalo = 2;

    // Movimentação de Cavalo (for)
    printf("\n--- MOVIMENTAÇÃO DE CAVALO (for)---\n");
    for (int i = 0; i < passo_cavalo; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Baixa\n");
        }
        printf("Esquerda\n");
    }

    // Movimentação de Cavalo (while)
    printf("\n--- MOVIMENTAÇÃO DE CAVALO (while)---\n");
    
    int i = 0; 
    while (i < passo_cavalo)
    {

        int j = 0;
        while (j < 2)
        {
            printf("Baixa\n");
            j++;
        }
        printf("Esquerda\n");
        i++;        
    }

    // Movimentação de Cavalo (do-while)
    printf("\n--- MOVIMENTAÇÃO DE CAVALO (do-while)---\n");
    
    i = 0; 
    do
    {
        int j = 0;
        do
        {
            printf("Baixa\n");
            j++;
        } while (j < 2);
        printf("Esquerda\n");
        i++;        
    } while (i < passo_cavalo);
    
    return 0;
    
}