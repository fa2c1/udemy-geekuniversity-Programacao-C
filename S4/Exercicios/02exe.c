#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float n, r;

int main(void){

    printf("Calculando a raiz quadrada de um numero\n\n");

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
        printf("Numero Invalido!\n");
    }    

    return (0);
}