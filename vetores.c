#include<stdio.h>

int main(){

	float media = 0, nota[5] = { 8.4, 7.9, 7.2, 5.0, 9.0};
	int indice;

	for(indice = 0; indice < 5; indice++){

		media = media + nota[indice];

		}
	media = media / indice;

		printf("\n\n A nota media é: %.1f \n\n" , media);

		return 0;

}
