//Exercício 3: 
//Implemente um programa que permita cadastrar contatos telefônicos em uma agenda, 
//utilizando vetores para armazenar os nomes e números de telefone. 
//Permita que o usuário digite o código 1 para adicionar um número e 2 para mostrar os números cadastrados e encerrar o software.
#include<stdio.h>
int main(){
int numerotelefone[2];
char nome[200][2];
int i,j;
for ( i = 0; i <2; i++)
{
printf("Digite um numero de telefone:");
scanf("%d",&numerotelefone[i]);  
}
switch (numerotelefone[i])
{
    fflush(stdin);
case 1:
    printf("1-Adicionar numero");
    scanf("%s",&numerotelefone);
    printf("Digite o numero 1");
    break;
case 2:
printf("2-Mostrar numeros cadastrados e encerrar o software");
printf("Digite o numero 2");
    break;
}
return 0;
}

