#include<stdio.h>
#include<stdlib.h>

int n;

int main(void){

    printf("Divisao por 3 ou 5\n\n");
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    if (n % 3 == 0 && n != 15)
    {
        printf("Numero e divisivel por 3");
    }
    else if (n % 5 == 0 && n != 15)
    {
        printf("Numero e divisivel por 5");
    }
    else
    {
        printf("O numero nao e divisivel por 3 ou 5, ou ele pode ser dividido pelos dois operadores");
    }
    
    printf("\n");

    return (0);
}