#include <stdio.h>

int main (){

    // VARIÁVEIS DAS NOTAS
    float n1, n2, n3, n4;
    float media;

    //TELA DE INTERAÇAO COM USUÁRIO
    printf("\n------ SISTEMA DE CÁLCULO DE MÉDIA DE NOTAS ESCOLARES ------\n");

    printf("Digite a sua NOTA 1: \n");
    scanf(" %f", &n1);

    printf("Digite a sua NOTA 2: \n");
    scanf(" %f", &n2);

    printf("Digite a sua NOTA 3: \n");
    scanf(" %f", &n3);

    printf("Digite a sua NOTA 4: \n");
    scanf(" %f", &n4);

    // SOMA DAS NOTAS
    printf("\nCARREGANDO ...\n");
    media = (n1+n2+n3+n4) / 4;

    // APRESENTAÇAO DA MÉDIA
    printf("Sua média é: %.2f", media);





return 0;

}