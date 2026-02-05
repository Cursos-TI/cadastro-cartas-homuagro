#include <stdio.h>

int main (){

    //1. Declaração de um tabuleiro de 10 x 10
    int tabuleiro[10][10];

    //2. Inicialização do tabeleiro: define todas as posições com 0 (água)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }

    //3. Posicionamento do navio horizontal (linha fixa em 5, colunas de 6 a 8)
    tabuleiro[5][5] = 3;
    tabuleiro[5][6] = 3;
    tabuleiro[5][7] = 3;

    //4. Posicionamento do navio vertical (coluna fixa em 5, linhas de 2 a 4) 
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;

    //5. Exibição do tabuleiro
    printf("--- Jogo de Batalha Naval (Nível Novato) ---\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da posição com um espaço para facilitar a visualização
        }
        printf("\n"); // Pula para a próxima linha após imprimir todas as colunas
    }
    return 0;
    
}