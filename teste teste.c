#include <stdio.h>

#define linhas 10
#define colunas 10

int main() {
    int tabuleiro[linhas][colunas] = {0};

    // 1. Definir o Ponto de Origem (Onde fica o topo do cone)
    // Vamos colocar o topo na Linha 2, Coluna 5
    int origemL = 0; 
    int origemC = 4;

    // 2. Criar o Cone usando Loops Aninhados e Condicionais
    // O loop 'i' percorre a altura do cone (3 linhas)
    for (int i = 0; i < 3; i++) {
        
        // O loop 'j' percorre a largura máxima que o cone pode ter (5 colunas)
        for (int j = 0; j < 5; j++) {
            
            /* LÓGICA MATEMÁTICA:
               Para i=0 (topo), j deve ser apenas 2 (o centro de 0 a 4).
               Para i=1, j pode ser 1, 2 ou 3.
               Para i=2, j pode ser 0, 1, 2, 3 ou 4.
               A condição abaixo faz exatamente esse desenho de triângulo: */
            if (j >= 2 - i && j <= 2 + i) {
                
                // Calculamos a posição real no tabuleiro 10x10
                int l = origemL + i;
                int c = (origemC - 2) + j;

                // Validação: Só grava se estiver dentro dos limites do tabuleiro (0 a 9)
                if (l >= 0 && l < linhas && c >= 0 && c < colunas) {
                    tabuleiro[l][c] = 5; // 5 representa a área da habilidade
                }
            }
        }
    }



    // --- HABILIDADE EM CRUZ ---
    int cruzlinha = 5; // Centro da cruz
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

    // --- HABILIDADE EM OCTAEDRO ---
    int octalinha = 5; // Centro do losango
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


    // 3. Exibição para conferir o resultado
    printf("     Habilidade: CONE\n\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}