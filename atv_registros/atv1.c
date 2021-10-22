# include <stdio.h>
# include <string.h>
typedef struct{
  char nome[50];
  char telefone[10];
  char celular[11];
  char endereco[50];
  int aniver;
} agenda;



int main(int argc, char const *argv[]) {
// declaracao variaveis
  //const contador = 2; // define o limite maximo de cadastro
  int i; // percorrer o indice
  agenda p;
// fim declaracao variaveis
  printf("Digite o nome:");
  gets(p.nome);
  printf("Digite o telefone:");
  gets(p.telefone);
  printf("Digite o celular:");
  gets(p.celular);
  printf("Digite o endereco:");
  gets(p.endereco);
  printf("Digite o aniversario: ddMMyyyy\n");
  scanf("%d\n",&p.aniver);getchar();
  agenda pteste[3];
  for (i=0; i < 1; i++) {
    printf("%s %d %d %s %d\n",pteste[i].nome
  }
  return 0;
}
