#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;

    printf("\nLendo e imprimindo os numeros inteiros positivos\n");
    printf("\n");

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (int i = n; i > 0; i--)
        {
                n = n - 1;
                printf("%d\n",n);
        }
        
    }
    else
    {
        printf("Digite um numero Positivo\n");
    }

    printf("\n");
    return (0);

}
