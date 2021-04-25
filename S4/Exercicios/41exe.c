#include<stdio.h>
#include<stdlib.h>

int main(void){

    float p, a, imc;

    printf("\nCalculo de IMC\n");
    printf("\n");

    printf("Digite o peso: ");
    scanf("%f", &p);

    printf("Digite a altura: ");
    scanf("%f", &a);
    printf("\n");

    imc = p / (a * a);

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
        printf("\n");
    }
    else if (imc <= 24.9 && imc >= 18.6)
    {
        printf("Saldavel");
        printf("\n");
    }
    else if (imc <= 29.9 && imc >= 25)
    {
        printf("Peso em excesso");
        printf("\n");
    }
    else if (imc <= 34.9 && imc >= 30)
    {
        printf("Obesidade Grau I");
        printf("\n");
    }
    else if (imc <= 39.9 && imc >= 35)
    {
        printf("Obesidade Grau II (Severa)");
        printf("\n");
    }
    else
    {
        printf("Obesidade Grau III (Morbida)");
        printf("\n");
    }
    
    printf("\n");
    return (0);
}