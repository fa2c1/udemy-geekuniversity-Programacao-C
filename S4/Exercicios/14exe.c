#include<stdio.h>
#include<stdlib.h>

float n1, n2, n3, m;

int main(){

    printf("Calculo de media ponderada\n\n");
    printf("Trabalho de Laboratorio (Peso 2):\t");
    scanf("%f", &n1);
    printf("Avaliacao Semestral (Peso 3):\t\t");
    scanf("%f", &n2);
    printf("Exame Final (Peso 5):\t\t\t");
    scanf("%f", &n3);
    printf("\n");

    m = (2*n1 + 3*n2 + 5*n3) / 10;

    if (m <= 2.9)
    {
        printf("Reprovado Media %.2f", m);
    }
    else if (m <= 4.9)
    {
        printf("Recuperacao Media %.2f", m);
    }
    else
    {
        printf("Aprovado Media %.2f", m);
    }    
    
    printf("\n");

    return 0;
}