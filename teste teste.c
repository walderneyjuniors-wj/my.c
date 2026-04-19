#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverpecatorre (int torre, int direcaotorre) {  
        if (torre > 0) {// Condição de parada para a recursão      
        if (direcaotorre == 1) printf("Direita\n");
        else if (direcaotorre == 2) printf("Esquerda\n");
        else if (direcaotorre == 3) printf("Cima\n");
        else if (direcaotorre == 4) printf("Baixo\n");
        printf("\n"); // Pula linha para organizar a saída
        moverpecatorre(torre - 1, direcaotorre); // Chama a função recursivamente para simular os movimentos restantes
        }

    }
void moverpecabispo (int bispo, int direcaobispo) {  
        if (bispo > 0) {// Condição de parada para a recursão      
        if (direcaobispo == 1) printf("Cima, Direita\n");
        else if (direcaobispo == 2) printf("Cima, Esquerda\n");
        else if (direcaobispo == 3) printf("Baixo, Direita\n");
        else if (direcaobispo == 4) printf("Baixo, Esquerda\n");
        printf("\n"); // Pula linha para organizar a saída
        moverpecabispo(bispo - 1, direcaobispo); // Chama a função recursivamente para simular os movimentos restantes
        }

    }
void moverpecorainha (int rainha, int direcaorainha) {  
        if (rainha > 0) {// Condição de parada para a recursão      
        if (direcaorainha == 1) printf("Direita\n");
        else if (direcaorainha == 2) printf("Esquerda\n");
        else if (direcaorainha == 3) printf("Cima\n");
        else if (direcaorainha == 4) printf("Baixo\n");
        else if (direcaorainha == 5) printf("Cima, Direita\n");
        else if (direcaorainha == 6) printf("Cima, Esquerda\n");
        else if (direcaorainha == 7) printf("Baixo, Direita\n");
        else if (direcaorainha == 8) printf("Baixo, Esquerda\n");
        printf("\n"); // Pula linha para organizar a saída
        moverpecorainha(rainha - 1, direcaorainha); // Chama a função recursivamente para simular os movimentos restantes
        }

    }



int main() {
    // Variáveis para controlar a quantidade de movimentos
    int torre, cavalo = 1, bispo, rainha, rei = 1, peao, escolhamenu;
    int direcaotorre, direcaocavalo, direcaobispo, direcaorainha, direcaorei, direcaopeao;

    // MENU INTERATIVO
    printf("Bem-vindo ao Jogo de Xadrez!\n");
    do {
        printf("------------------------------\n");
    printf("Escolha uma peça para mover:\n");
    printf("1. Torre\n");
    printf("2. Cavalo\n");
    printf("3. Bispo\n");
    printf("4. Rainha\n");
    printf("5. Rei\n");
    printf("6. Peão\n");
    printf("0. Sair\n");

    printf("\nEscolha uma peça: ");
    scanf("%d", &escolhamenu);

    // --- MOVIMENTAÇÃO DA PEÇA ESCOLHIDA ---

    switch (escolhamenu) {
        case 1:
        // --- MOVIMENTAÇÃO DA TORRE ---
        // Usando FOR: inicialização; condição; incremento
        printf("Qual direção deseja mover a Torre?\n"); // Pergunta para o usuário escolher a direção
        printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n");
        int direcaotorre;  // Variável para armazenar a direção escolhida
        scanf("%d", &direcaotorre); // Lê a direção escolhida pelo usuário
        printf("Quantidade de movimentos para a Torre: \n"); // Exibe a quantidade de movimentos disponíveis para a torre
        scanf("%d", &torre); // Lê a quantidade de movimentos que o usuário deseja para a torre
        if (torre > 7) { // Verifica se a quantidade de movimentos excede o limite da torre
            printf("A Torre pode se mover no máximo 7 vezes. Ajustando para 7 movimentos.\n");
            torre = 7; // Ajusta a quantidade de movimentos para o máximo permitido
        }
        printf("Movimento da Torre:\n");
        

        moverpecatorre(torre, direcaotorre); // Chama a função para simular os movimentos da torre

        break;

        case 2:
        // --- MOVIMENTAÇÃO DO CAVALO ---
        // Usando WHILE e FOR para simular os movimentos do cavalo
        printf("Qual direção deseja mover o Cavalo?\n"); // Pergunta para o usuário escolher a direção
        printf("1. Direita e Cima\n2. Direita e Baixo\n3. Esquerda e Cima\n4. Esquerda e Baixo\n5. Cima e Direita\n6. Cima e Esquerda\n7. Baixo e Direita\n8. Baixo e Esquerda\n");
        int direcaocavalo; // Variável para armazenar a direção escolhida
        scanf("%d", &direcaocavalo); // Lê a direção escolhida pelo usuário

        printf("Movimento do Cavalo:\n");
        while (cavalo --) {
            for (int c = 0; c < 2; c++) {
                switch (direcaocavalo) {
                case 1:
                    printf("Direita\n"); break;
                case 2:
                    printf("Direita\n"); break;
                case 3:
                    printf("Esquerda\n"); break;
                case 4:
                    printf("Esquerda\n"); break;
                case 5:
                    printf("Cima\n"); break;
                case 6:
                    printf("Cima\n"); break;
                case 7:
                    printf("Baixo\n"); break;
                case 8:
                    printf("Baixo\n"); break;
                }
            }
            switch (direcaocavalo) {
            case 1:
                printf("Cima\n"); break;
            case 2:
                printf("Baixo\n"); break;
            case 3:
                printf("Cima\n"); break;
            case 4:
                printf("Baixo\n"); break;
            case 5:
                printf("Direita\n"); break;
            case 6:
                printf("Esquerda\n"); break;
            case 7:
                printf("Direita\n"); break;
            case 8:
                printf("Esquerda\n"); break;
            }
        }
        printf("\n");
        break;

        case 3:
        // --- MOVIMENTAÇÃO DO BISPO ---
        // Usando WHILE: checa a condição antes de cada passo
        printf("Qual direção deseja mover o Bispo?\n"); // Pergunta para o usuário escolher a direção
        printf("1. Cima e Direita\n2. Cima e Esquerda\n3. Baixo e Direita\n4. Baixo e Esquerda\n");
        int direcaobispo; // Variável para armazenar a direção escolhida
        scanf("%d", &direcaobispo); // Lê a direção escolhida pelo usuário
        printf("Quantidade de movimentos para o Bispo: \n"); // Exibe a quantidade de movimentos disponíveis para o bispo
        scanf("%d", &bispo); // Lê a quantidade de movimentos que o usuário deseja para o bispo
        if (bispo > 7) { // Verifica se a quantidade de movimentos excede o limite do bispo
            printf("O Bispo pode se mover no máximo 7 vezes. Ajustando para 7 movimentos.\n");
            bispo = 7; // Ajusta a quantidade de movimentos para o máximo permitido
        }
        printf("Movimento do Bispo:\n");
     
        moverpecabispo(bispo, direcaobispo); // Chama a função para simular os movimentos do bispo

        break;

        case 4:
        // --- MOVIMENTAÇÃO DA RAINHA ---
        // Usando DO-WHILE: executa pelo menos uma vez e depois checa a condição
        printf("Qual direção deseja mover a Rainha?\n"); // Pergunta para o usuário escolher a direção
        printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n5. Cima, Direita\n6. Cima, Esquerda\n7. Baixo, Direita\n8. Baixo, Esquerda\n");
        int direcaorainha; // Variável para armazenar a direção escolhida
        scanf("%d", &direcaorainha); // Lê a direção escolhida pelo usuário
        printf("Quantidade de movimentos para a Rainha: \n"); // Exibe a quantidade de movimentos disponíveis para a rainha
        scanf("%d", &rainha); // Lê a quantidade de movimentos que o usuário deseja para a rainha
        if (rainha > 7) { // Verifica se a quantidade de movimentos excede o limite da rainha
            printf("A Rainha pode se mover no máximo 7 vezes. Ajustando para 7 movimentos.\n");
            rainha = 7; // Ajusta a quantidade de movimentos para o máximo permitido
        }
        printf("Movimento da Rainha:\n");
       
        moverpecorainha(rainha, direcaorainha); // Chama a função para simular os movimentos da rainha
        
        break;

        case 5:
        // --- MOVIMENTAÇÃO DO REI ---
        // Usando FOR para simular os movimentos do rei
        printf("Qual direção deseja mover o Rei?\n"); // Pergunta para o usuário escolher a direção
        printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n5. Cima, Direita\n6. Cima, Esquerda\n7. Baixo, Direita\n8. Baixo, Esquerda\n");
        int direcaorei; // Variável para armazenar a direção escolhida
        scanf("%d", &direcaorei); // Lê a direção escolhida pelo usuário
        printf("Quantidade de movimentos para o Rei: \n"); // Exibe a quantidade de movimentos disponíveis para o rei
        scanf("%d", &rei); // Lê a quantidade de movimentos que o usuário deseja para o rei
        if (rei > 1) { // Verifica se a quantidade de movimentos excede o limite do rei
            printf("O Rei pode se mover no máximo 1 vez. Ajustando para 1 movimento.\n");
            rei = 1; // Ajusta a quantidade de movimentos para o máximo permitido
        }

        printf("Movimento do Rei:\n");
        for (int r = 1; r <= rei; r++) {
            if (direcaorei == 1) printf("Direita\n");
        else if (direcaorei == 2) printf("Esquerda\n");
        else if (direcaorei == 3) printf("Cima\n");
        else if (direcaorei == 4) printf("Baixo\n");
        else if (direcaorei == 5) printf("Cima, Direita\n");
        else if (direcaorei == 6) printf("Cima, Esquerda\n");
        else if (direcaorei == 7) printf("Baixo, Direita\n");
        else if (direcaorei == 8) printf("Baixo, Esquerda\n");
        }
        printf("\n");
        break;

        case 6:
        // --- MOVIMENTAÇÃO DO PEÃO ---
        // Usando WHILE para simular os movimentos do peão
        printf("Qual direção deseja mover o Peão?\n"); // Pergunta para o usuário escolher a direção
        printf("1. Cima\n2. Cima, Direita (Captura)\n3. Cima, Esquerda (Captura)\n");
        int direcaopeao; // Variável para armazenar a direção escolhida
        scanf("%d", &direcaopeao); // Lê a direção escolhida pelo usuário
        printf("Quantidade de movimentos para o Peão: \n");
        scanf("%d", &peao); // Lê a quantidade de movimentos que o usuário deseja para o peão
        if (peao > 2) { // Verifica se a quantidade de movimentos excede o limite do peão
            printf("O Peão pode se mover no máximo 2 vezes (1 movimento normal e 1 captura). Ajustando para 2 movimentos.\n");
            peao = 2; // Ajusta a quantidade de movimentos para o máximo permitido
        }

        printf("Movimento do Peão:\n");
        int p = 1;
        while (p <= peao) {
            if ((direcaopeao == 1) && (peao == 1) || (peao == 2)) printf("Cima\n");
        else if ((direcaopeao == 2) && (peao != 2)) printf("Cima, Direita (Captura)\n");
        else if ((direcaopeao == 3) && (peao != 2)) printf("Cima, Esquerda (Captura)\n");
        else {
            printf("Jogada não permitida, revise as opções escolhidas");
        }
            p++; // Incrementa para não criar um loop infinito
        }
        printf("\n");
        break;

        case 0:
            // Opção para sair do jogo
            printf("Saindo do jogo...\n");
            break;
        default:
            // Opção inválida
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");

        } 
        
    }while (escolhamenu != 0); // Loop para garantir que o usuário escolha uma opção válida
    
    printf("Obrigado por jogar! Até a próxima!\n");







    return 0;
}