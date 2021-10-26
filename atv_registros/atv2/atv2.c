# include <stdio.h>
# include <stdlib.h>
#define MAX 5
typedef struct{
	char nome[150];
	char emer_telefone[15];
	int idade;
	char emer_contato[150];
} aluno;

aluno vet[MAX];

void leitura(int i){
  printf("Aluno %d de 5\n", i+1);
	printf("Nome do aluno: ");
	gets(vet[i].nome);
	printf("Digite a idade do aluno: ");
	scanf("%d",&vet[i].idade);
  getchar();
	printf("Nome do Contato de emergencia: ");
	gets(vet[i].emer_contato);
	printf("Digite o Telefone do Contato: ");
	gets(vet[i].emer_telefone);
}

void imprime(int i){
	printf("Nome: %s\t Idade: %d anos\n",vet[i].nome, vet[i].idade);
	printf("Contato: %s \tTelefone:%s\n",vet[i].emer_contato, vet[i].emer_telefone);
}

int main(int argc, char *argv[]) {
	int i,num;
	for(i=0;i<MAX;i++) leitura(i);

	do{
		printf("\nDigite um numero de 1 a %d:",MAX);
		scanf("%d",&num);
    if (num > MAX) {
      printf("Numero nao existente!");
    } else{
		imprime( num-1);
  }
	} while(num);
	return 0;
}
