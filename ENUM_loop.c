/*	Caracteristica ENUM -constante, código em loop para teste e prática.
	Mesma caracteristica de macro, define lista como constante, é representado tambem
	como  valores inteiros pelo compilador.*/

#include<stdio.h>
#include<stdlib.h>

	enum semana{Domingo=7, Segunda=1, Terca, Quarta, Quinta, Sexta, Sabado};



int main(){

	int opcao;


	do{
		printf("\n1-Seg\n2-Ter\n3-Qua\n4-Qui\n5-Sex\n6-Sab\n7-Dom\n");
		printf("\nEscolha um dia da semana: ");
		scanf("%d", &opcao);


	switch(opcao){

	case Segunda:
		printf("\n Segunda\n");
		break;
	case Terca:
		printf("\n Terça\n");
		break;
	case Quarta:
		printf("\n Quarta\n");
		break;
	case Quinta:
		printf("\n Quinta\n");
		break;
	case Sexta:
		printf("\n Sexta\n");
		break;
	case Sabado:
		printf("\n Sabado\n");
		break;
	case Domingo:
		printf("\n Domingo\n");
		break;
	default:
		printf("Opção inválida!\nEncerrado!");
	}
}while((opcao > 0) && (opcao < 8));


	return 0;
}
