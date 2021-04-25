#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1, n2;
    
    printf("Procurando numeros iguais, maiores e menores\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    printf("\n");

    if (n1 == n2)
    {
        printf("Os numeros digitados sao iguais");

    }
    else if (n1 > n2)
    {
        printf("O numero %d, e maior que %d", n1, n2);
    }
    else
    {
        printf("O numero %d, e maior que %d", n2, n1);
    }
    printf("\n");
    
    return 0;
}