#include <stdio.h>

int main (){

	int numero, soma = 0;

		do{ //entrada
			printf("Informe um numero: ");
			scanf(" %d" , &numero);
			//processamento
			soma =soma + numero;
		}
		while(numero !=0);

		printf("A soma é %d" , soma);
		return 0;
}

//Enquanto valor de entrada != de 0, apenas soma. Depois de declarado 0, apresenta os resultados e encerra.
