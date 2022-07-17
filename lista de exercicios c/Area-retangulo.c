/*1.7.11Para calcular a área de um retângulo, podemos multiplicar
sua largura pelo seu comprimento. Permita que o usuário entre
com a largura e comprimento de um retângulo qualquer e mostre
sua área.*/


#include<stdio.h>
int main(){

	float base, altura, area;

	printf("Digite o valor da base: ");
	scanf("%f" , &base);

	printf("Digite o altura: ");
	scanf("%f" , &altura);

	area = base * altura;

	printf("Área do retangulo: %.2f" , area);

	return 0;
}
