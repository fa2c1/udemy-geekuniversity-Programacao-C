#include<stdio.h>
#include<stdlib.h>

float n1, n2, n3, m;

int main(){

    printf("Calculo de media ponderada\n\n");
    printf("Nota 1 (Peso 1):\t");
    scanf("%f", &n1);
    printf("Nota 2 (Peso 1):\t");
    scanf("%f", &n2);
    printf("Nota 3 (Peso 2):\t");
    scanf("%f", &n3);
    printf("\n");

    m = (n1 + n2 + 2*n3) / 4;

    if (m >= 60)
    {
        printf("Aprovado Media %.2f", m);
    }
    else
    {
        printf("Reprovado Media %.2f", m);
    }
    
    printf("\n");

    return 0;
}