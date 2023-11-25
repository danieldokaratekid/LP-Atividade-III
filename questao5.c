// Exercício 5:
// Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final.
// Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. Crie um menu onde o usuário possa digitar
// o número 1 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas
#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i;
    char nomeproduto[200];
    float precoproduto;
    int valortotalvenda=0;
    int opcao;
    {
        printf("Digite um numero 1 ou 2:\n");
        printf("1-Adicionar Venda\n");
        printf("2-Sair Do menu\n");
        printf("Digite a opcao desejada");
        scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite o nome do produto:\n");
        scanf("%s",&nomeproduto);
        printf("Digite o preco do produto:\n");
        scanf("%f",&precoproduto);
        break;

    case 2:
        printf("Sair do Menu:\n");
        printf("Exibindo resultados:\n");
        valortotalvenda = valortotalvenda+precoproduto;
        break;
        default:
        printf("Opcao Invalida:\n");
        printf("nomedoproduto:%s\n",nomeproduto);
        printf("precoproduto:%f\n",precoproduto);
        printf("valortotalvenda:%d\n",valortotalvenda);
    }
    }
    return 0;
}
//Obs:Quando eu utilizei os vetores meu código começou a dar erros por isso preferi deixar sem vetores.Mesmo que não esteja mostrando o valor total das vendas;
