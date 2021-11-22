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
agenda pteste[MAX];

void leitura(int i){
  printf("CONTATO %d de 3\n",i+1);
  printf("Digite o nome:");
  gets(pteste[i].nome);
  printf("Digite o telefone:");
  gets(pteste[i].telefone);
  printf("Digite o celular:");
  gets(pteste[i].celular);
  printf("Digite o endereco:");
  gets(pteste[i].endereco);
  printf("Digite o aniversario: ddMMyyyy\n");
  gets(pteste[i].aniver);
}

void exibeTela(int i){
    printf("%s\n %s\n %s\n %s\n %s\n", pteste[i].nome,pteste[i].telefone,pteste[i].celular,pteste[i].endereco,pteste[i].aniver);
}

int main(int argc, char const *argv[]) {
  int i,num;
  	for(i=0;i<MAX;i++) leitura(i);
  	do{
  		printf("\nDigite um numero de 1 a %d:",MAX);
  		scanf("%d",&num);
      if (num > MAX) {
        printf("Numero nao existente!");
        break;
      } else{
  		exibeTela( num-1);
    }
  	} while(num);

return 0;
}
