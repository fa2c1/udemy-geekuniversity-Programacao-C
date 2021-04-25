#include<stdio.h>
#include<stdlib.h>

int n1 = 0, n2 = 0, n3 = 0;

int main(void){

    printf("Nostrar a Ordem crescente dos numeros digitados\n");
    printf("\n");

    printf("Digite 3 numero: ");
    scanf("%d %d, %d", &n1, &n2, &n3);
    printf("\n");

    if (n1 > n3) {
        int tmp = n3;
        n3 = n1;
        n1 = tmp;
    }
    if (n1 > n2) {
        int tmp = n2;
        n2 = n1;
        n1 = tmp;
    }
    if (n2 > n3) {
        int tmp = n3;
        n3 = n2;
        n2 = tmp;
    }

    printf("%d %d, %d", &n1, &n2, &n3);

    return (0);
}