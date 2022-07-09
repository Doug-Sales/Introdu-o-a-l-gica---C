/*1.7.10 Faça um programa que calcule a media da temperatura
ocorrida em um dia. O usuário deverá digitar 5 temperaturas e o
programa deverá mostrar em tela a média das temperaturas.*/


#include<stdio.h>

int main(){

	int tp1, tp2, tp3, tp4, tp5, res, res2;

	printf("\tMédia da temperatura.\n\n");
	printf("Valor 1: ");
	scanf("%i" , &tp1);

	printf("Valor 2: ");
	scanf("%i" , &tp2);

	printf("Valor 3: ");
	scanf("%i" , &tp3);

	printf("Valor 4: ");
	scanf("%i" , &tp4);

	printf("Valor 5: ");
	scanf("%i" , &tp5);

	res = ( tp1 + tp2 + tp3 + tp4 + tp5 ) / 5;

	res2 = (res * 9/5) + 32;             //( °C × 9/5) + 32 = °F

		printf("A média é: %.i°C ou %i°F" , res , res2);

		return 0;

}
