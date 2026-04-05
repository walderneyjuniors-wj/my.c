#include <stdio.h>

int main() {
    
    //VARIAVEIS
    int opcao1, cpfjunior = 123, cpfdigitado, senhadigitada, senhajunior = 123456, cpfdigitadoalterarsenha;
    //USUARIOS CADASTRADOS
    //WALDERNEY SILVA DE SOUZA JÚNIOR
    char nomejunior[50] = "Walderney Silva de Souza Júnior", emailjunior[50] = "walderney.souza@example.com", telefonejunior[20] = "68999904736";


    printf("Bem-vindo ao sistema de atendimento!\n");
    printf("\nO que deseja fazer?\n");
    printf("1 - Cadastrar novo usuário\n");
    printf("2 - Acessar sistema de atendimento\n");
    printf("3 - Sair\n");

    printf("Digite uma opção: \n");
    scanf(" %d", &opcao1);

    switch (opcao1) {
        case 1:
            //CADASTRO DE USUÁRIO
            printf("Opção inativa no momento. Por favor, escolha outra opção.\n");
            break;
        case 2:
            //ACESSAR SISTEMA DE ATENDIMENTO
            do {
             do {     
                printf("Digite seu CPF: ");
                scanf("%d", &cpfdigitado);
                if (cpfdigitado != cpfjunior) {
                    printf("\n  CPF INVALIDO OU NÃO CADASTRADO  \n");
                } else {
                    printf("Digite sua senha ou digite 1 para redefinir: ");
                    scanf("%d", &senhadigitada);
                }
                } while (cpfdigitado != cpfjunior);
            
            if (senhadigitada == 1) {
                printf("Digite seu CPF para alterar a senha: ");
                scanf("%d", &cpfdigitadoalterarsenha);
            }
            
            if (cpfdigitadoalterarsenha == cpfjunior) {
                printf("Digite uma nova senha\n");
                scanf(" %d", &senhajunior);
                printf("\n  --  SENHA ALTERADA  --  \n");         
            }
            
            if (cpfdigitado == cpfjunior && senhadigitada == senhajunior) {
                printf("Login bem-sucedido!\n\nBem-vindo, %s!\n", nomejunior);
                printf("Confira seus dados de cadastro:\n");
                printf("Email: %s\n", emailjunior);
                printf("Telefone: %s\n", telefonejunior);
            } else {
                printf("\n CPF OU SENHA INVÁLIDOS  \n");
            }
        } while ((cpfdigitado != cpfjunior) || (senhadigitada != senhajunior) || (cpfdigitadoalterarsenha != cpfjunior));

        break;
    case 3:
        printf("Saindo do sistema. Até mais!\n");
        break;
    default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        break;

    }






    return 0;

}