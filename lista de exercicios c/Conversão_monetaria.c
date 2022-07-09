/*1.7.11 A tabela abaixo mostra o valor do câmbio de moedas
estrangeiras para cada real. Faça um programa onde o usuário
entre com uma quantia em real e o programa mostre este valor
em outras moedas.
Moeda Valor (R$)
1 Dolar     1.9
1 Euro      3.1 €
*/

#include<stdio.h>

int main(){

	float dol = 1.9, eu = 3.1, re = 0, re2 = 0;

	printf("\t\t\tConversão monetária");
	printf("\n\nDigite o valor em R$:");
	scanf("%f" , &re);

	re = dol * re;
	re2 = re * eu;

	printf("\nU$: %.2f" , re);
	printf("\n€: %.2f" , re2);

	return 0;

}
