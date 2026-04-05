#include <stdio.h>

int main() {
    // Variáveis para controlar a quantidade de movimentos
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1;

    // --- MOVIMENTAÇÃO DA TORRE ---
    // Usando FOR: inicialização; condição; incremento
    printf("Movimento da Torre:\n");
    for (int t = 1; t <= torre; t++) {
        printf("Direita\n");
    }
    printf("\n"); // Pula linha para organizar a saída

    // --- MOVIMENTAÇÃO DO BISPO ---
    // Usando WHILE: checa a condição antes de cada passo
    printf("Movimento do Bispo:\n");
    int b = 1;
    while (b <= bispo   ) {
        printf("Cima, Direita\n");
        b++; // Incrementa para não criar um loop infinito
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Usando DO-WHILE: executa pelo menos uma vez e depois checa a condição
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= rainha);
    printf("\n");

    // --- MOVIMENTAÇÃO DO CAVALO ---
    // Usando WHILE e FOR para simular os movimentos do cavalo
    printf("Movimento do Cavalo:\n");
    while (cavalo --) {
        for (int c = 0; c < 2; c++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}