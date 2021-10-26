# include <stdio.h>
# include <string.h>
#define MAX 5
typedef struct{
  char nome[50];
  int matricula,faltas;
  float nota1,nota2,nota3,nota4;
} aluno;

void leitura(aluno *a){
printf("Digite o nome do aluno:");
  gets((*a).nome);
printf("Digite a matricula do aluno:");
  scanf("%d", &(*a).matricula);getchar();
printf("Digite a primeira nota:");
  scanf("%f", &(*a).nota1);getchar();
printf("Digite a segunda nota:");
  scanf("%f", &(*a).nota2);getchar();
printf("Digite a terceira nota:");
  scanf("%f", &(*a).nota3);getchar();
printf("Digite a quarta nota:");
  scanf("%f", &(*a).nota4);getchar();
printf("Digite o numero de faltas:");
  scanf("%d", &(*a).faltas);getchar();
}

void exibeTela(aluno a){
    printf("Nome: %s\n", a.nome);
    printf("Matricula: %d\n", a.matricula);
    printf("Nota1: %.2f\n", a.nota1);
    printf("Nota2: %.2f\n", a.nota2);
    printf("Nota3: %.2f\n", a.nota3);
    printf("Nota4: %.2f\n", a.nota4);
    printf("Faltas: %d\n", a.faltas);
}


float media(aluno a){
  float mediana = 0;
  mediana = (a.nota1 + a.nota2 + a.nota3 + a.nota4)/4;
  return mediana;
}

float situacao(aluno a){
  float mediana;
  mediana = (a.nota1 + a.nota2 + a.nota3 + a.nota4)/4;
	if(mediana >= 7){
		printf("Situacao: Aprovado\n");
	}else{
		printf("Situacao: Reprovado\n");
	}
}

int main(int argc, char const *argv[]) {
  int i,num;
  aluno alunos[MAX];
  for(i=0;i<MAX;i++) leitura(&alunos[i]);
  do{
    printf("\nDigite um numero de 1 a %d:",MAX);
    scanf("%d",&num);
    if (num > MAX) {
      printf("Numero nao existente!");
    } else{
    exibeTela(alunos[num-1]);
    printf("A media do aluno e: %.2f \n", media(alunos[num-1]));
    situacao(alunos[num-1]);
    }
  } while(num);

  return 0;
}
