#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct{
	char nome[150]; //1 byte
	char telefone[15]; //1 byte
	int idade; // 2 bytes
	char contato[150]; //1 byte
} aluno;

void leitura(aluno *a){
	printf("Digite o nome do aluno: ");	gets((*a).nome);
	printf("Digite a idade do aluno: ");scanf("%d",&(*a).idade); getchar();
	printf("Nome do Contato de emergencia: ");gets((*a).contato);
	printf("Digite o Telefone do Contato: ");gets(a->telefone);
}
void imprime(aluno a){
	printf("Nome: %s\t Idade: %d anos\n",a.nome,a.idade);
	printf("Contato: %s \tTelefone:%s\n",a.contato,a.telefone);
}

int main(int argc, char *argv[]) {
	aluno* alunos[MAX];
	int i,num;

	printf("Tamanho do vetor aluno: %d bytes\n",sizeof(aluno)); // verifica o tamanho em bytes o vetor Aluno ocupa.
	printf("Tamanho da variavel alunos[] em %d bytes\n",sizeof(alunos)*5);
	printf("Tamanho do programa %d em bytes\n",((sizeof(aluno))+ (sizeof(alunos)*5)+(sizeof(i))+(sizeof(num))));

	for(i=0;i<MAX;i++)alunos[i]=0;

	for(i=0;i<MAX;i++) {
		alunos[i]=(aluno*)malloc(sizeof(aluno)); // verifica se a alocacao de memoria foi realizada
		if(alunos[i]!=0)
			leitura(alunos[i]);
	}
	do{
		printf("Digite um numero de 1 a %d:",MAX);
		scanf("%d",&num);
		imprime(*alunos[num-1]);
	} while(num);

	for(i=0;i<MAX;i++){
		if(alunos[i]!=0) free(alunos[i]);
	}

	return 0;
}
