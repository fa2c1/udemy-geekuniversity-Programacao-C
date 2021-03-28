#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nQuantidade de numeros pares digitados\n");
    printf("\n");

    int pares = 0, contador = 0, num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 1000)
    {
        if (num % 2 == 0)
        {
            pares = pares + 1;
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
        } 
        else
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
        }
        contador = contador + 1;
    }

    printf("\nNumeros digitados: %d", contador);
    printf("\nNumeros pares digitados: %d", pares);
    printf("\n");

    printf("\n");
    return (0);

}
