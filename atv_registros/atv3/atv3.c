# include <stdio.h>
# include <string.h>
#define MAX 5
typedef struct{
  char nome[50];
  int matricula,faltas;
  float nota1,nota2,nota3,nota4;
} aluno;

aluno vetor[MAX];

void leitura(int i){
printf("Aluno %d\n", i + 1);
printf("Digite o nome do aluno:");
  gets(vetor[i].nome);
printf("Digite a matricula do aluno:");
  scanf("%d", &vetor[i].matricula);getchar();
printf("Digite a primeira nota:");
  scanf("%f", &vetor[i].nota1);getchar();
printf("Digite a segunda nota:");
  scanf("%f", &vetor[i].nota2);getchar();
printf("Digite a terceira nota:");
  scanf("%f", &vetor[i].nota3);getchar();
printf("Digite a quarta nota:");
  scanf("%f", &vetor[i].nota4);getchar();
printf("Digite o numero de faltas:");
  scanf("%d", &vetor[i].faltas);getchar();
}

void exibeTela(int i){
    printf("Nome: %s\n", vetor[i].nome);
    printf("Matricula: %d\n", vetor[i].matricula);
    printf("Nota1: %.2f\n", vetor[i].nota1);
    printf("Nota2: %.2f\n", vetor[i].nota2);
    printf("Nota3: %.2f\n", vetor[i].nota3);
    printf("Nota4: %.2f\n", vetor[i].nota4);
    printf("Faltas: %d\n", vetor[i].faltas);
}


float media(int i){
  float mediana = 0;
  mediana = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3 + vetor[i].nota4)/4;
  return mediana;
}

float situacao(int i){
  float mediana;
  mediana = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3 + vetor[i].nota4)/4;
	if(mediana >= 7){
		printf("Situacao: Aprovado\n");
	}else{
		printf("Situacao: Reprovado\n");
	}
}

int main(int argc, char const *argv[]) {
  int i,num;
  for(i=0;i<MAX;i++) leitura(i);
  do{
    printf("\nDigite um numero de 1 a %d:",MAX);
    scanf("%d",&num);
    if (num > MAX) {
      printf("Numero nao existente!");
    } else{
    exibeTela(num-1);
    printf("A media do aluno e: %.2f \n", media(num-1));
    situacao(num-1);
  }

  } while(num);

  return 0;
}
