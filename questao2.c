// Exerc�cio 2:
// Crie um programa que fa�a o cadastro de 5 alunos em uma escola,
// armazenando seus dados como: nome, idade e  3 notas  para cada aluno.
// Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a m�dia. Ap�s calcular a m�dia,
// verifique para cada aluno se este estar� aprovado (m�dia maior ou igual a 7,0), em recupera��o (m�dia menor que 7,0 e maior ou igual a 5,0)
// ou reprovado (m�dia menor que 5,0)com base nestes crit�rios.
#include <stdio.h>
int main()
{
    int i, j;
    char alunos[200][5];
    int idade[5];
    float notas[3];
    float media[3];
    int soma=0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno:");
        scanf("%s", &alunos[i]);
        printf("Digite a idade do aluno:");
        scanf("%d", &idade[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Digite a nota do aluno:");
        scanf("%d",&notas[i]);
        soma+=notas[i];
        media[i]=soma/(float)j;
        printf("\nImprimindo resultados:\n");
    }
    if (media[i] >= 7)
    {
        printf("Aprovado\n");
    }
    else if (media[i] < 7 && media[i] >= 5)
    {
    printf("Recupera��o\n");
    }
    else
    {
printf("Reprovado\n");
    }
        printf("\nalunos:%c\n",alunos);
        printf("\nmedia:%1.f\n",media[i]);

return 0;
}