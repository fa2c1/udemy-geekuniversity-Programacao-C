#include<stdio.h>
#include<stdlib.h>

int n, soma = 0;

int main(void){

    printf("\nSoma dos 10 numeros digitados\n");
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numeros inteiros: ");
        scanf("%d", &n);
        
           soma = soma + n;
                
    }

    printf("\nA soma dos 5 primeiros numeros digitados foi: %d", soma);
    printf("\n");

    printf("\n");
    return (0);

}
