#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{
	char nome[150];
	char emer_telefone[15];
	int idade;
	char emer_contato[150];
} aluno;

void exibe_tela(aluno a){
	printf("Nome: %s\t Idade: %d anos\n",a.nome, a.idade);
	printf("Contato: %s \tTelefone:%s\n",a.emer_contato, a.emer_telefone);
}

//void leitura(aluno vet[MAX], int i){
 void leitura (aluno *a)  {
	printf("Nome do aluno: ");
	gets((*a).nome);
	printf("Digite a idade do aluno: ");
	scanf("%d",&(*a).idade);
	getchar();
	printf("Nome do Contato de emergencia: ");
	gets((*a).emer_contato);
	printf("Digite o Telefone do Contato: ");
	gets((*a).emer_telefone);
}


int main(int argc, char *argv[]) {
	int i,num;
    aluno alunos[MAX];
	for(i=0;i<MAX;i++) leitura(&alunos[i]);
	do{
		printf("\nDigite um numero de 1 a %d:",MAX);
		scanf("%d",&num);
		if (num > MAX) {
      printf("Numero nao existente!");
    } else{
		exibe_tela( alunos[num-1]);
	}
	} while(num);
	return 0;
}
