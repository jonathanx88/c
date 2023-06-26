#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[250];
    char email[250];
    int idade;
    char telefone[100];
    int opcao;

    printf("qual seu nome?\n ");
    gets(nome);

    printf("qual sua idade?\n ");
    scanf("%d", &idade);

    fflush(stdin);

    printf("qual seu email?\n ");
    gets(email);

    printf("qual o seu telefone?\n ");
    gets(telefone);

    system("cls");

    do
    {   printf("\n");

        printf("\nEscolha opção abaixo:\n");
        
        printf("\n");

        printf("1- Mostrar nome e idade\n");
        printf("2- Mostrar nome e email\n");
        printf("3- Mostrar nome e telefone\n");
        printf("4- Mostrar todas as informações\n");
        printf("0- Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:
            printf("Nome: %s e idade: %d ", nome, idade);
            break;

        case 2:
            printf("Nome: %s e email: %s ", nome, email);
            break;

        case 3:
            printf("Nome: %s e telefone: %s ", nome, telefone);
            break;

        case 4:
            printf("Nome: %s, idade: %d, email: %s, telefone: %s", nome, idade, email, telefone);
            break;

        case 0:

            printf("Sair do programa...");
            break;

        default:

            printf("Opção incorreta");
            break;

            sleep(5);
            system("cls");
        }
    } while (opcao != 0);

    return 0;
}