#include<stdio.h>
#include<stdlib.h>

float n;
int f;

int main(void){

    printf("\nConceito de faltas em notas\n");
    printf("\n");

    printf("Digite a nota: ");
    scanf("%f", &n);

    printf("Digite o numero de faltas: ");
    scanf("%d", &f);
    printf("\n");

    if (n >=9 &&  n <= 10)
    {
        if (f <= 20)
        {
            printf("Conceito A");
            printf("\n");
        }
        else
        {
            printf("Conceito B");
            printf("\n");
        }        
    }
    else if (n >= 7.5 &&  n < 9)
    {
        if (f <= 20)
        {
            printf("Conceito B");
            printf("\n");
        }
        else
        {
            printf("Conceito C");
            printf("\n");
        }
    }
    else if (n >= 5 &&  n < 7.5)
    {
        if (f <= 20)
        {
            printf("Conceito C");
            printf("\n");
        }
        else
        {
            printf("Conceito D");
            printf("\n");
        }        
    }
    else if (n >= 4 &&  n < 5)
    {
        if ( f <= 20)
        {
            printf("Conceito D");
            printf("\n");
        }
        else
        {
            printf("Conceito E");
            printf("\n");
        }
    }
    else
    {
        printf("Conceito E");
        printf("\n");
    }
    
    printf("\n");
    return (0);
}