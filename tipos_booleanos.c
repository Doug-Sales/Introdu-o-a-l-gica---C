#include<stdio.h>

int main(){
	int booleano = 1; //Nota aplicada aqui para teste.

	if(booleano){
		printf("Verdadeiro...");
	}else{
		printf("Falso...");
	}
	return 0;
}

/* É um tipo de dado lógico que pode ter apenas UM de DOIS valores.
 * Na linguagem C, não existe um tipo de dado boolean (não podemos declarar como
 * variavel). Porém reconhece o valor 0 como falso (false),
 * e qualquer valor diferente de 0 como verdadeiro (true).
 */
