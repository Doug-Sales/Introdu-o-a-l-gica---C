/*1.7.8 Faça um programa que permita que o usuário digite dois
valores inteiros. Multiplique estes valores guardando o produto
em uma terceira variável. Mostre o resultado da multiplicação.
// Sem loop*/


#include<stdio.h>

int main(){

	int vl1, vl2, res;

	printf("\tMULTIPLICAÇÃO.\n\n");
	printf("Digite um numero: ");
	scanf("%i" , &vl1);
	printf("Digite novamente: ");
	scanf("%i" , &vl2);

	res = vl1 * vl2;

	printf("O resultado é: %i" , res);

	return 0;
}
