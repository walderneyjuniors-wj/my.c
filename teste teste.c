#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define tam_navio 3

int main() {
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa tudo como água [cite: 260]

    // --- POSICIONAMENTO COM LOOPS FOR ---

    // 1. Navio Vertical (Ex: Coluna 1, Linhas 2 a 4)
    for (int i = 5; i < 5 + tam_navio; i++) {
        tabuleiro[i][1] = 3;
    }

    // 2. Navio Horizontal (Ex: Linha 8, Colunas 4 a 6)
    for (int j = 4; j < 4 + tam_navio; j++) {
        tabuleiro[9][j] = 3;
    }

    // 3. Navio Diagonal Principal (Linha e Coluna aumentam juntas)
    // Coordenada inicial: (0, 5) -> (1, 6) -> (2, 7)
    for (int k = 0; k < tam_navio; k++) {
        tabuleiro[2 + k][5 + k] = 3; // 
    }

    // 4. Navio Diagonal Secundária (Linha aumenta, Coluna diminui)
    // Coordenada inicial: (5, 9) -> (6, 8) -> (7, 7)
    for (int k = 0; k < tam_navio; k++) {
        tabuleiro[5 + k][9 - k] = 3; // 
    }

    // --- EXIBIÇÃO DO TABULEIRO (Loops Aninhados) --- [cite: 20, 223]
    printf("\n   === BATALHA NAVAL: NIVEL AVENTUREIRO ===\n\n");
    printf("     ");
    for (int i = 0; i < 10; i++) printf("%c ", letras[i]);
    printf("\n    -------------------\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d | ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha após cada linha do tabuleiro
    }

 
    return 0;
}