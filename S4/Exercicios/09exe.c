#include<stdio.h>
#include<stdlib.h>

float s, p;

int main(){

    printf("aprovacao de cadastros\n\n");

    printf("Salario:\t");
    scanf("%f", &s);
    printf("Parcelas:\t");
    scanf("%f", &p);
    printf("\n");

    if (p < ((s * 20) / 100))
    {
        printf("Credito nao autorizado!");
    }
    else
    {
        printf("Credito autorizado!");
    }
    printf("\n");
    
    return 0;
}