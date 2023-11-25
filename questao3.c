// Exercício 3:
// Implemente um programa que permita cadastrar contatos telefônicos em uma agenda,
// utilizando vetores para armazenar os nomes e números de telefone.
// Permita que o usuário digite o código 1 para adicionar
// um número e 2 para mostrar os números cadastrados e encerrar o software.
#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int numerotelefone[2];
    char nome[200][2];
    int opcao;
    int i;
    
            printf("Digite 1 ou 2:\n");
            printf("1-Adicionar numero\n");
            printf("2-Sair e mostrar resultados\n");
            printf("Digite a opção desejada:");
            scanf("%d",&opcao);
            switch (opcao)
            {
            case 1:
            printf("====Digite um numero de telefone==\n");
            scanf("%d",&numerotelefone);
                printf("\n\nDigite um nome:");
                scanf("%d", &nome[i]);
                fflush(stdin);
                break;
            case 2:
                printf("Saindo do programa:\n");
                break;
                default:
                printf("Opcao Invalida\n");
                printf("numerotelefone:%d\n",numerotelefone);
                printf("nome:%d\n",nome);
        
        
    }
        return 0;
    }

