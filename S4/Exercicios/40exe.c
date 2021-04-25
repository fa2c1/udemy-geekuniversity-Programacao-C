#include<stdio.h>
#include<stdlib.h>

int main(void){

    float vcf, vfc;

    printf("\nCalculo de custo de imposto sobre venda de carro novo\n");
    printf("\n");

    printf("Digite o valor de fabrica do carro: ");
    scanf("%f", &vcf);

    if (vcf <= 12000)
    {
        vfc = vcf + (vcf * 0.05);
        printf("Valor a pagar: R$ %.2f", vfc);
        printf("\n");
    }
    else if (vcf <= 25000 && vcf > 12000)
    {
        vfc = vcf + (vcf * 0.10) + (vcf * 0.15);
        printf("Valor a pagar: R$ %.2f", vfc);
        printf("\n");
    }
    else
    {
        vfc = vcf + (vcf * 0.15) + (vcf * 0.20);
        printf("Valor a pagar: R$ %.2f", vfc);
        printf("\n");
    }
    
    printf("\n");
    return (0);
}