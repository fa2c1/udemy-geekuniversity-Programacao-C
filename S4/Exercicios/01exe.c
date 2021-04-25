#include<stdio.h>
#include<stdlib.h>

int n1, n2;

int main(void){

    printf("Retornando o maior valor digitado: \n\n");

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("\n O Numero %d e maior que %d.", n1, n2);
    }
    else
    {
        printf("\n O Numero %d e maior que %d.", n2, n1);
    }

    printf("\n");

    return (0);
}