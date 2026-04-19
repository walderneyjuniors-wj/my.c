#include <stdio.h>

void pecatorre(int n) { // Função de teste para verificar a estrutura do código
    if (n > 0) {
        printf("T%d\n", n); // Imprime o valor de n para verificar a estrutura do código

        pecatorre(n - 1); // Chamada recursiva da função de teste
    }
}

int main() {
    int torre;
    printf("Digite um número para testar a função pecatorre: ");
    scanf("%d", &torre); // Lê o número digitado pelo usuário 
    printf("Iniciando o teste...\n");
    pecatorre(torre); // Chama a função de teste










    return 0;
}