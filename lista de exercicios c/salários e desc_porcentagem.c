/*
 1.7.10 Faça um programa que calcule e mostre o salário líquido
de um funcionário. O programa deve receber o salário bruto e
considerar que todo funcionário tem um desconto de 10% de IR
no salário bruto.
 */

#include<stdio.h>


int main(){

	float slr_b, slr_l;
	float desc = 0.1;

	printf("Digite o salário bruto: ");
	scanf("%f" , &slr_b);

	slr_l = slr_b - (slr_b * desc);

	printf("Salário liquido com desconto de 10%: %.2f" , slr_l);


	return 0;
}
