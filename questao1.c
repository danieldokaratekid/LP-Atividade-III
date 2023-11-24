//Exercício 1: 
//Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

// Mostre as informações solicitadas de cada pessoa e informe:
//O nome e a altura da pessoa mais alta e a mais baixa.
//O nome e o peso da pessoa com maior peso e menor peso;
//O nome a idade da pessoa com mais idade e com menos idade.
#include<stdio.h>
int main(){
float altura[5];
float maioraltura[5];
float menoraltura[5];
float peso[5];
float maiorpeso[5];
float menorpeso[5];
int maisidade;
int menosidade;
int i,j;
char nome[200][5];
int idade[5];
for ( i = 0; i < 5; i++)
{
printf("Digite seu nome:\n");
scanf("%s",&nome[i]);
printf("Digite sua idade:\n");
scanf("%d",&idade[i]);
printf("Digite sua altura:\n");
scanf("%f",&altura[i]);
printf("Digite seu peso:\n");
scanf("%f",&peso[i]);
}
if(maioraltura){

}
return 0;
}