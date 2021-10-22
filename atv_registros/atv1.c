# include <stdio.h>
# include <string.h>
typedef struct{
  char nome[50];
  char telefone[10];
  char celular[11];
  char endereco[50];
  int aniver;
} agenda;



int main() {
// declaracao variaveis
  //const contador = 2; // define o limite maximo de cadastro
  int i; // percorrer o indice
  agenda p;
// fim declaracao variaveis
  p.aniver = 0;
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
  for (i=0; i < 3; i++) {
    printf("%s %d %d %s %d\n",pteste[i].nome,
                              pteste[i].telefone,
                              pteste[i].celular,
                              pteste[i].endereco,
                              pteste[i].aniver);
}

}
  // array pessoa
/*
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
*/
//}
