# include <stdio.h>
# include <string.h>
#define MAX 3

typedef struct{
  char nome[50];
  char telefone[15];
  char celular[15];
  char endereco[50];
  char aniver[10];
} agenda;

void exibeTela(agenda a){
    printf("%s\n %s\n %s\n %s\n %s\n", a.nome,a.telefone,a.celular,a.endereco,a.aniver);
}

void leitura(agenda *a){
  printf("Digite o nome:");
  gets((*a).nome);
  printf("Digite o telefone:");
  gets((*a).telefone);
  printf("Digite o celular:");
  gets((*a).celular);
  printf("Digite o endereco:");
  gets((*a).endereco);
  printf("Digite o aniversario: ddMMyyyy\n");
  gets((*a).aniver);
}

int main(int argc, char const *argv[]) {
  int i,num;
  agenda pteste[MAX];
  	for(i=0;i<MAX;i++) leitura(&pteste[i]);
  	do{
  		printf("\nDigite um numero de 1 a %d:",MAX);
  		scanf("%d",&num);
      if (num > MAX) {
        printf("Numero nao existente!");
      } else{
  		exibeTela( pteste[num-1]);
    }
  	} while(num);

return 0;
}
