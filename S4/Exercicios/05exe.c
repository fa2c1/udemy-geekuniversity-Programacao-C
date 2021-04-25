#include<stdio.h>
#include<stdlib.h>

int n;

int main(){
    
    printf("Numero Pares e impares\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 == 0)
    {
        printf("O numero %d e um numero Par\n", n);
    }
    else
    {
        printf("O numero %d e um numero Impar\n", n);
    }
    
    return 0;
}