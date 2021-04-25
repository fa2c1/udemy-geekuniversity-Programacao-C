#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n = 1, soma;

    printf("\nSoma dos primeiros 50 numeros Pares\n");
    printf("\n");

    for (int i = 0; i < 100; i++)
    {
        n = n + 1;

        if (n % 2 == 0)
        {
            printf("Numero par: %d\n", n);
            soma = soma + n;
        }
        
    }
    printf("\n");

    printf("A soma dos 50 Primeiros numeros pares é: %d\n", soma);    

    printf("\n");
    return (0);

}
