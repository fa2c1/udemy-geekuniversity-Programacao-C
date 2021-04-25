#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n, contador = 0;

    printf("\nNumero Inteiro Positivo/Impar Ordem Crescente\n");
    printf("\n");

    printf("Digite um numero inteiro Positivo/Impar: ");
    scanf("%d", &n);
    printf("\n");

    if (n >= 0 && n % 2 != 0)
    {
        for (int i = 0; i <= n; i++)
        {
            contador = contador + 1;
            if (contador % 2 != 0)
            {
                printf("Numero Positivo/Par: %d\n", contador);
            }
        }
        
    }
    else
    {
        printf("Digite um numero Positivo/Impar");
    }    

    printf("\n");
    return (0);

}
