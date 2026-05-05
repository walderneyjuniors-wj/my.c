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
    for (int j = 7; j < 7 + tam_navio; j++) {
        tabuleiro[9][j] = 3;
    }

    // 3. Navio Diagonal Principal (Linha e Coluna aumentam juntas)
    // Coordenada inicial: (0, 5) -> (1, 6) -> (2, 7)
    for (int k = 0; k < tam_navio; k++) {
        tabuleiro[4 + k][1 + k] = 3; // 
    }

    // 4. Navio Diagonal Secundária (Linha aumenta, Coluna diminui)
    // Coordenada inicial: (5, 9) -> (6, 8) -> (7, 7)
    for (int k = 0; k < tam_navio; k++) {
        tabuleiro[5 + k][9 - k] = 3; // 
    }

    // HABILIDADES
    //CONE
    int conelinha = 0; // Linha onde o cone será posicionado
    int conecoluna = 4; // Coluna onde o cone será posicionado
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                int l = conelinha + i;
                int c = (conecoluna - 2) + j;
                if (l >= 0 && l < linhas && c >= 0 && c < colunas) {
                    tabuleiro[l][c] = 5; // 5 representa a área da habilidade
                }
            }
        }
    }

    // CRUZ
    int cruzlinha = 4; // Centro da cruz
    int cruzcoluna = 5;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // Se for a linha do meio ou a coluna do meio do bloco 3x3
            if (i == 1 || j == 2) {
                int l = (cruzlinha - 1) + i;
                int c = (cruzcoluna - 1) + j;
                if (l >= 0 && l < linhas && c >= 0 && c < colunas) {
                    tabuleiro[l][c] = 5;
                }
            }
        }
    }

    // OCTAEDRO
    int octalinha = 8; // Centro do losango
    int octacoluna = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Lógica de distância: a soma da distância do centro não pode ser maior que 1
            // (i-1) é a distância da linha atual para o centro (linha 1)
            int distL = (i >= 1) ? i - 1 : 1 - i;
            int distC = (j >= 1) ? j - 1 : 1 - j;
            
            if (distL + distC <= 1) {
                int l = (octalinha - 1) + i;
                int c = (octacoluna - 1) + j;
                if (l >= 0 && l < linhas && c >= 0 && c < colunas) {
                    tabuleiro[l][c] = 5;
                }
            }
        }
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



    return 0;
}
