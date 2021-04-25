#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float n, r, q;

int main(void){

    printf("Calculando a raiz quadrada de um numero real\n\n");

    printf("Digite o numero que deseja obter o quadrado: ");
    scanf("%f", &n);
    printf("\n");

    if (n > 0)
    {
        r = sqrt(n);
        printf("O quadrado de %.2f e: %.2f\n", n, r);
    }
    else
    {
        q = n * n;
        printf("O Numero %.2f elevado a dois e de %.2f e: \n", n, q);
    }    

    return (0);
}