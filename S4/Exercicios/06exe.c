#include<stdio.h>
#include<stdlib.h>

int a, b, n1, n2, maior, menor;

int main(){

    printf("Diferenca entre numeros\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("\n");

    if (n1 > n2)
    {
        a = n1;
        maior = n1 - n2;
        printf("O maior numero digitado foi: %d\n", a);
        printf("A diferenca entre os numeros digitados %d e %d foi de %d casas decimais\n", n1, n2, maior);
    }
    else
    {
       b = n2;
       menor = n2 - n1;
       printf("O maior numero digitado foi: %d\n", b);
       printf(", A diferenca entre os numeros digitados %d e %d foi de %d casas decimais\n", n1, n2, menor);
    }
    
    return 0;
}