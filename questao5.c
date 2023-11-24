// Exercício 5:
// Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final.
// Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. Crie um menu onde o usuário possa digitar
// o número 1 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas
#include <stdio.h>
int main()
{
    int i,j;
    int vendas[2];
    char nomeproduto[200][2];
    int precoproduto[2];
    int valortotalvenda;
    for (i = 0; i < 2; i++)
    {
        printf("Digite o preco do produto:\n");
        printf("1-Adicionar Venda\n");
        printf("2-Sair Do menu\n");
    switch (vendas[i])
    {
    case 1:
        printf("Digite o nome do produto:\n");
        scanf("%c",&nomeproduto);
        printf("Digite o preço do produto\n");
        scanf("%f",&precoproduto[2]);
        valortotalvenda += vendas[i];
        break;

    case 2:
        printf("Sair do Menu\n");
        break;
        printf("nomedoproduto:%s\n",nomeproduto[i]);
        printf("precoproduto:%d\n",precoproduto[i]);

    }
    }
    return 0;
}