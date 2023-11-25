//Exercício 1: 
//Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

// Mostre as informações solicitadas de cada pessoa e informe:
//O nome e a altura da pessoa mais alta e a mais baixa.
//O nome e o peso da pessoa com maior peso e menor peso;
//O nome a idade da pessoa com mais idade e com menos idade.
#include<stdio.h>
int main(){
float altura[2];
float maioraltura[2];
float menoraltura[2];
float peso[2];
float maiorpeso[2];
float menorpeso[2];
int maisidade[2];
int menosidade[2];
int i;
char nome[200][2];
int idade[2];
for ( i = 0; i < 2; i++)
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
printf("Exibindo Informacoes:\n");
if(maioraltura){
printf("A Pessoa com maior altura é:\n");
printf("nome:%d\n",nome[i]);
printf("maioraltura:%d\n",maioraltura[i]);
}
if(menoraltura){
printf("A Pessoa com menor altura é:\n");
printf("nome:%d\n",nome[i]);
printf("menoraltura:%d\n",menoraltura[i]);
}
if(maisidade){
printf("A Pessoa com mais idade é:\n");
printf("nome:%d\n",nome[i]);
printf("maisidade:%d\n",maisidade[i]);

if(menosidade){
printf("A Pessoa com menos idade é:\n");
printf("nome:%d\n",nome[i]);
printf("menosidade:%d\n",menosidade[i]);

if(maiorpeso){
printf("A Pessoa com mais peso:\n");
printf("nome:%d\n",nome[i]);
printf("maiorpeso:%d\n",maiorpeso[i]);
}
if(menorpeso){
printf("A Pessoa com menor peso\n");
printf("nome:%d\n",nome[i]);
printf("menorpeso:%d\n",menorpeso[i]);
}
}

}
return 0;
}
