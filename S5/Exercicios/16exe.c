#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;

    printf("\nNumero Inteiro Positivo/Impar Ordem Decrescente\n");
    printf("\n");

    printf("Digite um numero inteiro Positivo/Impar: ");
    scanf("%d", &n);
    printf("\n");

    if (n >= 0 && n % 2 != 0)
    {
        for (int i = n; i > 0; i--)
        {
            n = n - 1;
            if (n % 2 != 0)
            {
                printf("Numero Positivo/Par: %d\n", n);
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
