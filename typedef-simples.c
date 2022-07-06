//TYPEDEF- renomeia o TIPO (int,float,double...), para qualquer desejado, teste simples em soma básica.
//Testando formatos de processamento e saida de dados.

#include<stdio.h>
#include<stdlib.h>

typedef int teste;


int main(){

	teste x;

	printf("Digite valor:");
	scanf("%d", &x);

	printf("%d", x);

	int y;

	printf("\n\nDigite valor:");
	scanf("%d", &y);

	printf("%d + %d = %d", x , y, (x+y));


	return 0;
}

