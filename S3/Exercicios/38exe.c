#include<stdio.h>
#include<stdlib.h>

float v, d, l;

int main(void){

    printf("Calculo de Reajuste Salarial\n\n");

    printf("Digite o valor do Salario atual: ");
    scanf("%f", &v);
    printf("Digite o valor do Reajuste: ");
    scanf("%f", &d);
    
    l = v + (v / d);

    printf("\n Valor do Salario antigo R$ %2.f com reajuste de %2.f%% valor do salario atual R$ %.2f \n", v, d, l);

    return (0);
}