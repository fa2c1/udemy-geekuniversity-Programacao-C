#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n, soma = 0;
    float media = 0;

    printf("\ndigite 10 numeros e descubra a média entre eles\n");
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        soma = soma + n;
        media = soma / 10;
    }

    printf("A media entre os numeros digitados é: %.2f\n", media);    

    printf("\n");
    return (0);

}
