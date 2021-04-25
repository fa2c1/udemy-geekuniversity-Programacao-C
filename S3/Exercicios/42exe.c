#include<stdio.h>
#include<stdlib.h>

float sbase, sliquido, sbruto, extras, desc_inss;

int main(void){

    printf("Calculo de salario\n\n");

    printf("Salario Base:\t");
    scanf("%f", &sbase);
   
    
    sbruto = sbase + ((sbase * 5) / 100);
    desc_inss = (sbruto * 8) / 100;
    sliquido = sbruto - desc_inss;
    extras = sbruto - sbase;

    printf("\nResumo do salario\n\n");
    printf("Valor Base: %.2f\n", sbase);
    printf("Horas Bonicicacao: %.2f\n", extras);
    printf("Salario Bruto: %.2f\n", sbruto);
    printf("desconto INSS: %.2f\n\n", desc_inss);
    printf("Salario Liquido: %.2f\n", sliquido);

    return (0);
}