#include <stdio.h>
//Exercício 4: 
//Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
//A quantidade de números ímpares;
//A quantidade de números negativos;
//O maior e o menor número;
//A média de números pares;
//A média de números inseridos.
int main()
{
    int numeros[5];
    int i;
    int pares = 0;
    int impares = 0;
    int negativos = 0;
    int maior = 0;
    int menor = 9999;
    int somaPares = 0;
    float mediaPares = 0;
    int somatodosnumeros = 0;
    float mediatodosnumeros=0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares = pares + 1;
            somaPares = somaPares + numeros[i];
        } else {
            impares++;
        }

        {
        if (numeros[i] < 0) {
            negativos++;
        }
        {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        }
        if (numeros[i] < menor) {
            menor = numeros[i];     
        }

       
        somatodosnumeros = somatodosnumeros + numeros[i];
    }

    
    if (pares > 0) {
        mediaPares = somaPares / (float) pares;
    }

    mediatodosnumeros = somatodosnumeros / (float) i;
    printf("\nExibindo os valores:\n");
    printf("\nQuantidade de numeros pares: %d \n", pares);
    printf("Quantidade de numeros ímpares: %d \n", impares);
    printf("Quantidade de numeros negativos: %d \n", negativos);
    printf("Quantidade de numeros inseridos: %d \n", i);
    printf("Maior numero: %d \n", maior);
    printf("Menor numero: %d \n", menor);
    printf("Media de numeros pares: %.1f \n", mediaPares);
    printf("Media de todos os numeros inseridos: %.1f \n", mediatodosnumeros);;
    }

    {
        
    }

    return 0;
}
