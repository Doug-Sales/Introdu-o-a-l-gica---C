#include<stdio.h>


int main(){


	printf("\n\tFatorial Simples");
	printf("\n\n Digite um valor inteiro: ");         // FATORIAL

	unsigned int x, i, f=1;

	scanf("%d", &x);

	for(i=1; i <= x; i++)
		f = f * i;

	printf("\n O fatorial de %d é: %d", x , f);



	return 0;
}
