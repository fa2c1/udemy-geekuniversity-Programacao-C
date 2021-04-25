#include<stdio.h>
#include<stdlib.h>

int i;

int main(void){

    printf("Tabela de idade - Campeonato\n\n");
    printf("Idade: ");
    scanf("%d", &i);
    printf("\n");

    if (i < 5)
    {
        printf("Idade insuficiente para participar do campeonato");
    }
    else if (i >= 5 && i < 8)
    {
        printf("Categoria Infantil A");
    }
    else if (i >= 8 && i < 11)
    {
        printf("Categoria Infantil B");
    }
    else if (i >= 11 && i < 14)
    {
        printf("Categoria Juvenil A");
    }
    else if (i >= 14 && i < 18)
    {
        printf("Categoria Juvenil B");
    }
    else
    {
        printf("Categoria Senior");
    }

    printf("\n");
    
    return (0);
}