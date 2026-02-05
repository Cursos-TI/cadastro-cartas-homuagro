#include <stdio.h>



// --- Funções Recursivas (Nível Mestre) ---



// Função recursiva para mover a Torre (5 casas para a Direita)

void moverTorre(int n) {

    if (n > 0) { 

        printf("Direita\n");

        moverTorre(n - 1); 

    }

}



// Função recursiva para mover a Rainha (8 casas para a Esquerda)

void moverRainha(int n) {

    if (n > 0) {

        printf("Esquerda\n");

        moverRainha(n - 1);

    }

}



// Função recursiva para o Bispo (Simulação de movimento diagonal)

void moverBispoRecursivo(int n) {

    if (n > 0) {

        printf("Cima, Direita\n");

        moverBispoRecursivo(n - 1);

    }

}



int main() {

    // 1. Movimentação da Torre

    printf("--- Movimentação da Torre ---\n");

    moverTorre(5); 

    printf("\n"); 



    // 2. Movimentação do Bispo (Loops Aninhados)

    printf("--- Movimentação do Bispo ---\n");

    for (int i = 0; i < 5; i++) { 

        for (int j = 0; j < 1; j++) {

            printf("Cima, Direita\n"); 

        }

    }

    printf("\n");



    // 3. Movimentação da Rainha

    printf("--- Movimentação da Rainha ---\n");

    moverRainha(8); 

    printf("\n");



    // 4. Movimentação do Cavalo (Complexo)

    printf("--- Movimentação do Cavalo ---\n");

    for (int i = 0, j = 1; i < 1; i++) { 

        int k = 0;

        while (k < 2) { 

            printf("Cima\n");

            k++;

        }

        

        if (j > 0 && k == 2) {

            printf("Direita\n");

        }

    }



    return 0;

}