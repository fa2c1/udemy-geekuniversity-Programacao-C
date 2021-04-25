#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nMédia dos 10 numeros digitados ignorando valores negativos\n");
    printf("\n");

    float n, soma = 0, media = 0;
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &n);

        if (n >= 0)
        {
            contador = contador + 1;
            soma = soma + n;
            media = soma / contador;
        }
        
    }
    printf("\n");

    printf("A media dos valores válidos é: %.2f\n", media);

    printf("\n");
    return (0);

}
