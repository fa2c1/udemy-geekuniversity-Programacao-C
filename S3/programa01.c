//Aula sobre Variaveis
#include <stdio.h>

int main(){ //a chave delimita um bloco de codigo (inicio do bloco)
	//declarando variaveis
	int idade; //tipo inteiro

	//declarando e inicializando variaveis
	// int idade = 0;

	//funcao para escrever algo na saida padrao (console)
	printf("Qual e a sua idade: ");

	//recebendo dados da variavel
	scanf("%d", &idade);

	//saida
	printf("a sua idade e %d", idade);

	return 0;

}//fim do bloco
