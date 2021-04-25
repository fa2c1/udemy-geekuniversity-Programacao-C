#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float x, y, r;

int main(void){

    printf("Ache a distancia entre dois pontos\n\n");
    printf("Digite a distancia x: ");
    fflush(stdout);
    scanf("%f", &x);
    printf("Digite a distancia y: ");
    fflush(stdout);
    scanf("%f", &y);
    printf("\n");
    
    r = sqrt(pow(x,2) + pow(y,2));

    printf("A distancia entre x e y e de: %.3f", r);
    printf("\n");

    return (0);
}