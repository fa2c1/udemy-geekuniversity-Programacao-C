#include<stdio.h>
#include<stdlib.h>

float valor, reajuste;

int main(void){

    printf("Reajuse de preços\n");
    printf("\n");

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("\n");

    if (valor < 50)
    {
        reajuste = valor * 0.05 + valor;
        printf("O produto sofreu um reajuste de 5%% -> %.2f", reajuste);
        printf("\n");
    }
    else if (valor < 100)
    {
        reajuste = valor * 0.10 + valor;
        printf("O produto sofreu um reajuste de 10%% -> %.2f", reajuste);
        printf("\n");
    }
    else
    {
        reajuste = valor * 0.15 + valor;
        printf("O produto sofreu um reajuste de 15%% -> %.2f", reajuste);
        printf("\n");
    }
    

    return (0);
}