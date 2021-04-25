#include<stdio.h>
#include<stdlib.h>

int n1 = 5, n2 = 10, n = 0, y = 0;
float x = 0;

int main(void){

    printf("Prova de matematica\n\n");

    printf("Questao 1/5\n\n");
    
    printf("Qual e a resposta certa?\n");
    printf("1) A soma de %d + %d = 15\n", n1, n2);
    printf("2) a soma de %d + %d = 510\n", n1, n2);
    printf("Digite a resposta: ");
    scanf("%d", &n);
    printf("\n\n");

    if (n == 1)
    {
        printf("Parabens, resposta certa!");
        printf("\n\n");
        y = y + 1;
    }
    else
    {
        printf("Haa que peninha, a resposta certa e: %.0f", x = n1 + n2);
        printf("\n\n");
    }

    printf("Questao 2/5\n\n");

    printf("Qual e a resposta certa?\n");
    printf("1) A subtracao de %d - %d = 5\n", n1, n2);
    printf("2) a suntracao de %d - %d = -5\n", n1, n2);
    printf("Digite a resposta: ");
    scanf("%d", &n);
    printf("\n\n");

    if (n == 2)
    {
        printf("Parabens, resposta certa!");
        printf("\n\n");
        y = y + 1;
    }
    else
    {
        printf("Haa que peninha, a resposta certa e: %.0f", x = n1 - n2);
        printf("\n\n");
    }

    printf("questao 3/5\n\n"); 

    printf("Qual e a resposta certa?\n");
    printf("1) A multiplicacao de %d * %d = 50\n", n1, n2);
    printf("2) a multiplicacao de %d * %d = 500\n", n1, n2);
    printf("Digite a resposta: ");
    scanf("%d", &n);
    printf("\n\n");

    if (n == 1)
    {
        printf("Parabens, resposta certa!");
        printf("\n\n");
        y = y + 1;
    }
    else
    {
        printf("Haa que peninha, a resposta certa e: %.0f", x = n1 * n2);
        printf("\n\n");
    }

    printf("Questao 4/5\n\n"); 

    printf("Qual e a resposta certa?\n");
    printf("1) A divisao de %d / %d = 2\n", n1, n2);
    printf("2) a divisao de %d / %d = 0,08\n", n1, n2);
    printf("Digite a resposta: ");
    scanf("%d", &n);
    printf("\n\n");

    if (n == 2)
    {
        printf("Parabens, resposta certa!");
        printf("\n\n");
        y = y + 1;
    }
    else
    {
        printf("Haa que peninha, a resposta certa e: %.2f", x = n1 / n2);
        printf("\n\n");
    }

    printf("Questao 5/5\n\n"); 

    printf("Qual e a resposta certa?\n");
    printf("1) A soma de %d + %d = 105\n", n1, n2);
    printf("2) a soma de %d + %d = 15\n", n1, n2);
    printf("Digite a resposta: ");
    scanf("%d", &n);
    printf("\n\n");

    if (n == 2)
    {
        printf("Parabens, resposta certa!");
        printf("\n\n");
        y = y + 1;
    }
    else
    {
        printf("Haa que peninha, a resposta certa e: %.0f", x = n1 + n2);
        printf("\n\n");
    }

    printf("Voce acertou %d questoes", y);
    printf("\n");

    return (0);
}