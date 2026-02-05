#include <stdio.h>

int main (){
    // 1. Declaração do tabuleiro 10x10
    int tabuleiro[10][10];

    // 2. Inicialização: preenche o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
    
    // 3. Posicionamento de navios (tamanho fixo de 3 posições)
    // Navio Horizontal (Novato)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Navio Vertical (Novato)
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;

    // Navio Diagonal 1 (Aventureiro): i e j aumentam simultaneamente
    // Exemplo: posições [5][6], [6][7], [7][8]
    for (int i = 5; i < 8; i++)
    {
        tabuleiro[i][i+1] = 3;
    }
    // Exemplo: posições [9][0], [8][1], [7][2]
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[9-i][i] = 3;
    }
    // 4. Exibição do tabuleiro 
    printf("\n--- Jogo de Batalha Naval ---\n");
    printf("     (Nível Aventureiro) \n     ");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);            
        }
        printf("     \n     "); // Pula para a próxima linha
    }
    return 0;    
}