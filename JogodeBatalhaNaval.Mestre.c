#include <stdio.h>

int main() {
    // 1. Declaração do tabuleiro 10x10
    int tabuleiro[10][10];

    // 2. Inicialização: preenche o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
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
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][i + 1] = 3;
    }

    // Navio Diagonal 2 (Aventureiro): posições [9][0], [8][1], [7][2]
    for (int i = 0; i < 3; i++) {
        tabuleiro[9 - i][i] = 3;
    }

    // =========================================================
    // 4. Matrizes de habilidade (Nível Mestre) - 5x5 (0/1)
    // =========================================================
    int cone[5][5];
    int cruz[5][5];
    int octa[5][5];

    // 4.1 Construir CONE (origem no topo-centro (0,2) na matriz 5x5), expandindo para baixo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i <= 2) {
                int left = 2 - i;
                int right = 2 + i;

                if (j >= left && j <= right) cone[i][j] = 1;
                else cone[i][j] = 0;
            }
            else cone[i][j] = 0;            
        }
    }

    // 4.2 Construir CRUZ (origem no centro (2,2) na matriz 5x5)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) cruz[i][j] = 1;
            else cruz[i][j] = 0;
        }
    }

    // 4.3 Construir OCTAEDRO (losango) com origem no centro (2,2) na matriz 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int di = (i > 2) ? (i - 2) : (2 - i);
            int dj = (j > 2) ? (j - 2) : (2 - j);

            if (di + dj <= 2) octa[i][j] = 1;
            else octa[i][j] = 0;
        }
    }

    // =========================================================
    // 5. Integrar habilidades ao tabuleiro (marcar com 5)
    //    Regras:
    //    - onde habilidade == 1 => tabuleiro recebe 5
    //    - NÃO sobrescrever navio (3)
    //    - checar limites do tabuleiro (0..9)
    // =========================================================

    // Função inline (sem criar função extra) via macro mental:
    // tab_r = origem_r + (i - sr), tab_c = origem_c + (j - sc)

    // 5.1 Aplicar CONE: origem interna na matriz (sr=0, sc=2), alinhada no tabuleiro em (2,3)
    int origemConeR = 2, origemConeC = 3;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int r = origemConeR + (i - 0);
                int c = origemConeC + (j - 2);

                if (r >= 0 && r < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[r][c] != 3) tabuleiro[r][c] = 5;
                }
            }
        }
    }

    // 5.2 Aplicar CRUZ: origem interna na matriz (sr=2, sc=2), alinhada no tabuleiro em (7,7)
    int origemCruzR = 7, origemCruzC = 7;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int r = origemCruzR + (i - 2);
                int c = origemCruzC + (j - 2);

                if (r >= 0 && r < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[r][c] != 3) tabuleiro[r][c] = 5;
                }
            }
        }
    }

    // 5.3 Aplicar OCTAEDRO: origem interna na matriz (sr=2, sc=2), alinhada no tabuleiro em (2,7)
    int origemOctaR = 2, origemOctaC = 7;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (octa[i][j] == 1) {
                int r = origemOctaR + (i - 2);
                int c = origemOctaC + (j - 2);

                if (r >= 0 && r < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[r][c] != 3) tabuleiro[r][c] = 5;
                }
            }
        }
    }

    // =========================================================
    // 6. Exibição do tabuleiro (agora com 0/3/5)
    // =========================================================
    printf("\n--- Jogo de Batalha Naval ---\n");
    printf("     (Nível Mestre) \n     ");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("     \n     ");
    }

    return 0;
}
