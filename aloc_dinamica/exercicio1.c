//Exercicio 1 ok
#include <string.h>
typedef struct{
char nome[40];
char telefone[15];
} contato;

int main(int argc, char *argv[]){
  contato *teste;
  teste = (contato*)malloc(sizeof(contato));
  sizeof(contato);
  printf("%d",teste); // retorna o ponteiro da memoria
  if(teste != 0){ // verifico se a memoria alocada é diferente de 0, se verdadeiro foi alocado memoria.
  gets((*teste).nome);
  strcpy((*teste).telefone, "1234567");
  printf("Nome = %s\nTelefone =  %s\n",(*teste).nome,(*teste).telefone);
  }
  free(teste);
}
