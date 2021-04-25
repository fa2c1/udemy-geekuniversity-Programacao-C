#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n, impar = 0;

    printf("\nLeia um Numero N e imprima os N primeiros numero naturais Impares\n");
    printf("\n");

    printf("Digite um numero Natural: ");
    scanf("%d", &n);
    printf("\n");

    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            impar = impar + 1;
            if (impar % 2 != 0)
            {
                printf("Numeros Naturais Impar: %d\n", impar);
            }
            
        }
        
    }
    else
    {
        printf("Digite um numero Valido!\n");
    }        

    printf("\n");
    return (0);

}
