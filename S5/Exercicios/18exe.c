#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nLeia n numeros e informe e imprima o maior deles\n");
    printf("\n");

    int qtd, num, maior=0;

    printf("Digite quantas vezes deseja digitar um numero: ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
    }

    printf("\nNumeros digitados: %d", qtd);
    printf("\nMaior numero digitado: %d", maior);
    printf("\n");

    printf("\n");
    return (0);

}
