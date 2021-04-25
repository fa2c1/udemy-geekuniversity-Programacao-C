#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nSoma dos pares e multiplicação dos numeros inpares do intervalo digitados:\n");
    printf("\n");

    int somapar = 0, somaimpar = 1, num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            somapar = somapar + i;
        }
        else
        {
            somaimpar = somaimpar * i;
        }
    }

    printf("\nSoma dos numeros pares: %d", somapar);
    printf("\nMultiplicacao dos numeros impares: %d", somaimpar);

    printf("\n\n");
    return (0);

}
