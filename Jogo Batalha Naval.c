#include <stdio.h>

#define linhas 10
#define colunas 10
#define tam_navio 3

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};  //Identificação das colunas
    int tabuleiro [linhas][colunas] = {0};  //Inicialização do tabuleiro com 0 (vazio)
    /*linha[2][3] = 3; // Horizontal
    linha[2][4] = 3;
    linha[2][5] = 3;

    linha[5][8] = 3; // Vertical
    linha[6][8] = 3;
    linha[7][8] = 3;*/

    // --- POSICIONAMENTO COM LOOPS FOR ---

    // 1. Navio Vertical (Ex: Coluna 1, Linhas 2 a 4)
    for (int i = 0; i < 0 + tam_navio; i++) {
        tabuleiro[i][0] = 3;
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

    printf("\n   ===   BEM VINDO A BATALHA NAVAL   ===   \n");   
    printf("\n");
    printf("\n");
    printf("   ===   TABULEIRO   ===   \n");   //Exibição do tabuleiro
    printf("\n");
    printf("     ");
    for (int i = 0; i < 10; i++) {   
        printf("%c ", coluna[i]);
    }
    printf("\n");
    printf("    --------------------\n");
    for (int l = 0; l < 10; l++) {   //Loop para gerar o tabuleiro
        printf("%2d | ", l + 1);
    
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
            
        }
        printf("\n");
    }
    



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
