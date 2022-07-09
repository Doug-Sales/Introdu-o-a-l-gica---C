#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct cadastroCliente{
	char nomeCompleto[100];
	char curso[60];
	int anoNascimento;
	long int contato;
}cliente[20];			 //Inicializado para controle, porém manipulável.

void espaco(){
	printf("\n\n *****=====================DADOS====================*****\n\n");
} 				//função VOID no escopo global.

typedef int cont;

int main(){

	cont i,contador;

	printf("\t\tCADASTRO !\n\n");

	printf("Quantos cadastros serão realizados: ");
	scanf("%d", &i);
	getchar();

	for(contador = 0; contador < i; contador++){

		printf("\nCurso: ");
		fgets(cliente[contador].curso, 60, stdin);


		printf("Digite o nome completo: ");
		fgets(cliente[contador].nomeCompleto, 100, stdin);


		printf("Ano nascimento 'yyyy': ");
		scanf("%d", &cliente[contador].anoNascimento);


		printf("Contato: ");
		scanf("%d", &cliente[contador].contato);
		getchar();



	}
		//consulta simples e pontual.

	
		
		printf("\n\t\tConsultar cadasto 'número': ");
		scanf("%d", &i);

		i = i-1;      // n-1
		espaco();

		printf("CURSO: %s", cliente[i].curso);
		printf("NOME: %s", cliente[i].nomeCompleto);
		printf("ANO DE NASCIMENTO: %d\n", cliente[i].anoNascimento);
		printf("CONTATO: %li\n", cliente[i].contato);
		

	return 0;
}
