# include <stdio.h>
# include <string.h>
typedef struct{
  int idade;
  char nome[50];
} pessoa;

int main() {
  int i;
  pessoa p;
  printf("Digita nome:\n");
  gets(p.nome);
  p.idade = 10;
  //system("cls");
  printf("%s - %d\n",p.nome,p.idade);
  pessoa fam[3];
  strcpy(fam[0].nome,"pai");
  fam[0].idade=40;
  strcpy(fam[1].nome,"mae");
  fam[1].idade=39;
  strcpy(fam[2].nome,"filho");
  fam[2].idade=15;
  for (i=0; i < 3; i++) {
    printf("%s | %d\n",fam[i].nome,fam[i].idade);
  }

}
