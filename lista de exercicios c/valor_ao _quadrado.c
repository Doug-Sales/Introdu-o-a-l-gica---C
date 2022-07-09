
/*1.7.7 Faça um programa que receba do usuário um numero
qualquer e mostre o quadrado deste número. */

#include <stdio.h>

int main(){

	int valor;

	do{
	printf("\tQualquer valor ao quadrado.\n\n");
	printf("Digite o número: ");
	scanf("%d" , &valor);

	valor = valor * valor;


		if(valor == 0){
			printf("Encerrado.\n");
		}else{
			printf("Valor ao quadrado: %d\n\n" , valor);
		}

	}

	while(valor != 0);



		return 0;
}
