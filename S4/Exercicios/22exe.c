#include<stdio.h>
#include<stdlib.h>

int i, ts;

int main(void){

    printf("Validacao da aposentadoria\n\n");
    printf("Idade:\t\t");
    scanf("%d", &i);
    printf("Tempo Servico:\t");
    scanf("%d", &ts);
    printf("\n");

    if (i >= 65)
    {
        printf("Aposentadoria Permitida");
    }
    else if (i > 30 && ts >= 30)
    {
        printf("Aposentadoria Permitida");
    }
    else if (i >= 60 && ts >= 25)
    {
        printf("Aposentadoria Permitida");
    }
    else
    {
        printf("Aposentadoria Negada");
    }
    
    printf("\n");  

    return (0);
}