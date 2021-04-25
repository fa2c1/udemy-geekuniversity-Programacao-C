#include <stdio.h>

int main(){

   char caracter;

   printf("Converter caracter maiusculo para minusculo\n\n");

   printf("Digite um caracter: ");
   scanf("%c", &caracter);   

   int primeiro_maisculo = 'A';
   int primeiro_minusculo = 'a';

   int diferenca = primeiro_minusculo - primeiro_maisculo;   

   printf("\n O caracter digitado: %c -> %c \n", caracter, caracter + diferenca);

   return 0;

}