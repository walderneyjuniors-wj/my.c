#include <stdio.h>
#include <string.h> // 1. Adicione esta biblioteca

int main () {
    int opcaomenu, opcaocadastro, opcaowalderney;
    char cpfacesso[20], senhaacesso[20];

    char nomewalderney[50] = "WALDERNEY SILVA DE SOUZA JÚNIOR", senhaacessowalderney[20] = "123456", cpfwalderney[20] = "02217625233";

    printf("MENU DE ACESSO\n");
    printf("\n1 - Acessar o sistema\n2 - Cadastrar\n3 - Sair\n");
    scanf("%d", &opcaomenu);

    switch(opcaomenu) {
        case 1:
        while (strcmp(senhaacesso, senhaacessowalderney) != 0 || strcmp(cpfacesso, cpfwalderney) != 0) {
            printf("Digite seu CPF: ");
            scanf("%s", cpfacesso);
            printf("Digite sua senha: ");
            scanf("%s", senhaacesso);

            // 2. Use strcmp para comparar as strings
            if (strcmp(senhaacesso, senhaacessowalderney) == 0 && strcmp(cpfacesso, cpfwalderney) == 0) {
                printf("Acesso concedido!\n Bem-vindo, %s!\n", nomewalderney);

                printf("\n --- O que deseja fazer? --- \n");
                printf("1 - Ver perfil\n2 - Editar perfil\n3 - Sair\n");
                scanf("%d", &opcaowalderney);
                switch(opcaowalderney) {
                    case 1:
                        printf("Nome: %s\nCPF: %s\n", nomewalderney, cpfwalderney);
                        break;
                    case 2:
                        printf("Funcionalidade de edição de perfil ainda não implementada.\n");
                        break;
                    case 3:
                        printf("Saindo...\n");
                        break;
                    default:
                        printf("Opção inválida!\n");
                }
            } else {
                printf("Acesso negado! CPF ou senha incorretos. Tente novamente.\n");
            }

        }

            break;
            
        case 2:
            printf("Serviço indisponível.\n");
            break;
            
        case 3:
            printf("Saindo...\n");
            break;
            
        default:
            printf("Opção inválida!\n");
    }






    return 0;
}