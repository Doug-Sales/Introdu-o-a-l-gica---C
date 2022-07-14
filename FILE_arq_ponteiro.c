
   
   #include<stdio.h>

int main(){
	FILE *arq;
	char nome[50];

	arq = fopen("nomes.txt", "w"); //Existe forma melhor de manipular, porém essa é uma forma simples e introdutória.

	if(arq){
		printf("Adicione o nome ou 0 para sair: \n");
		fgets(nome, 50, stdin);
		while(nome[0] != '0'){
			fputs(nome, arq);
			printf("Acrescente um nome ou 0 para sair: \n");
			fgets(nome, 50, stdin);
		}
	}else{
		printf("Não foi possivel criar o arquivo.");
	}fclose(arq);

	return 0;
}

 "w"- Abre o arquivo para escrita (se o arquivo já existir, será sobrescrito com um novo zerado).

A linguagem C possui apenas dois tipos de arquivos nesse contexto apresentado: 
	-Arquivos de de texto 
	-Arquivos binários
   Resumidamente a diferença entre eles é tempo de processamento e tamanho dos arquivos.  
No arquivo de texto pode ser feito a leitura e edição por qualquer bloco de notas ou editor de texto simples, pra isso acontecer cada caracterer é gravado com tamanho de 8 bits, seguindo a tabela ASCII.
Com isso o tamanho do arquivo ocupa um espaço maior, facilitando a leitura e manipulação por sua "conversão"(implicita).
   Já nos arquivos binário o armazenamento é feito da forma como estão organizado na memória, pulando essa etapa de "conversão", para leitura e manipulação, o arquivo copia diretamente no arquivo, não ocupando mais do que o necessário.
   
   	Para não extender tanto eu indico a leitura do livro, Linguagem C, BACKES André- 2.ed [Capitulo-12].
   	
   Neste exercicio utilizo ponteiro apenas para criação e inclusão de dados. Outros comandos serão acrescentados futuramente.
   "w"- Abre o arquivo para escrita (se o arquivo já existir, será sobrescrito com um novo zerado).
