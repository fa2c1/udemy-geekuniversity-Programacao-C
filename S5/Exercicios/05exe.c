#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nSoma de 10 valores digitados\n");
    printf("\n");

    int n, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        soma = soma + n;
    }

    printf("\n");
    
    printf("A soma dos valores digitados é: %d\n", soma);

    printf("\n");
    return (0);

}
