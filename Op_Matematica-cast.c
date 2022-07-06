#include <stdio.h>
//Operações matematicas
/*
 * somar +
 * subtrair -
 * multiplicar *
 * elevar ao quadrado x * x
 * módulo ( resto da divisão de x por y) %
 - Aplicação de CAST para treinar
 */
int main(){
	
	int num1, num2;
	float res;

	printf("Digite o valor 1: ");
	scanf("%d" , &num1);

	printf("Informe o valor 2: ");
	scanf("%d" , &num2);

	//soma +
	res = num2 + num1;
		printf("A soma é %d\n" , (int)res);  //cast

	//subtrair
	res = num2 - num1;
		printf("A subtração é %d\n" , (int)res); //cast

	//multiplicar
	res = num2 - num1;
		printf("A multiplicação é %d\n" ,(int)res);   //cast

	//Dividir
	res = (float)num1 / (float)num2;  //cast (float)- valido durante a aplicação DIVIDIR, converte para numeros reais ex: 1,11
		printf("A divisão é %f\n" , res);

	//Elevar ao quadrado
	res  = num1 * num1;
		printf("O quadrado do valor 1 é %d\n" , (int)res); //cast

	res  = num2 * num2;
		printf("O quadrado do valor 2 é %d\n" , (int)res); //cast

	//módulo (verificando se o num1 é par ou impar)
	if(num1 % 2 == 0){
		printf("%d é par\n" , num1);
	}else{
		printf("%d é impar\n" , num1);
	}
	return 0;

}
