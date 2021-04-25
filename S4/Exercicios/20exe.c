#include<stdio.h>
#include<stdlib.h>

int a, b, c;

int main(void){

    printf("Descubra se os numeros digitados pertence a algum Tipo de triangulo\n\n");
    printf("Digite um numero correspondente a um  dos 3 lado de um tiangulos: ");
    scanf("%d", &a);
    printf("Digite um numero correspondente a um  dos 3 lado de um tiangulos: ");
    scanf("%d", &b);
    printf("Digite um numero correspondente a um  dos 3 lado de um tiangulos: ");
    scanf("%d", &c);
    printf("\n");

    if (a == b && b == c && c == a)
    {
        printf("Triangulo Equilatero");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Triangulo Isosceles");
    }
    else if (a != b && b != c && c != a)
    {
        printf("Triangulo Escaleno");
    }
    else
    {
        printf("Os valores passado não corresponde a nenhum tipo de tringulo");
    }
    
    printf("\n");

    return (0);
}