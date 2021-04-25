#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nDigite 10 numeros e mostre o Menor e Maior numero digitado\n");
    printf("\n");

    float maior, menor, n;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%f",&n);

        if (n >= maior)
        {
            maior = n;
        }
        else
        {
            menor = n;
        }
        
    }
    printf("\n");

    printf("O Maior numero digitado foi: %.2f\n", maior);
    printf("O Menor numero digitado foi: %.2f\n", menor); 

    printf("\n");
    return (0);

}
