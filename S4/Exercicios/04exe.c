#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float n, r;

int main(void){

    printf("Calculando Numeros Positivos\n\n");

    printf("Digite o numero que deseja obter a raiz quadrada: ");
    scanf("%f", &n);
    printf("\n");

    if (n < 0)
    {
        r = n * n;
        printf("O quadrado de %.2f e: %.2f\n", n, r);
    }
    else
    {
        r = sqrt(n);
        printf(" A Raiz Quadrada de %.2f e: %.2f\n", n, r);
    }    

    return (0);
}