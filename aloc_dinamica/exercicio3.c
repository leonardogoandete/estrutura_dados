#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
  char nome[20];
  char telefone[20];
  char celular[20];
  char endereco[50];
  char aniversario[11];
}contato;

void menu(){
  printf("Selecione a opcao:\n");
  printf("1 - Inserir Contato\n2 - Listar Contato\n3 - Sair\n");
}

void cadastrar(contato *a){
  printf("== CADASTRANDO CONTATO ==\n");
  printf("Digite o nome do contato:\n");
  gets((*a).nome);
  printf("Digite o telefone:\n");
  gets((*a).telefone);
  printf("Digite o celular:\n");
  gets((*a).celular);
  printf("Digite o endereco:\n");
  gets((*a).endereco);
  printf("Digite o aniversario: dd/MM/YYYY\n");
  gets((*a).aniversario);
  system("cls");
}

void imprime(contato a){
  printf("Nome: %s\n",a.nome);
  printf("Telefone: %s\n",a.telefone);
  printf("Celular: %s\n",a.celular);
  printf("Endereco: %s\n",a.endereco);
  printf("Aniversario: %s\n",a.aniversario);
}

int main(int argc, char const *argv[]) {
  contato* contatos[MAX];
  int opcao, i, num, tot=1;
  for (i ; i < MAX; i++) contatos[i] = 1;
  do {
    menu();
    printf("Digite a opcao:\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
      case 1:
		    contatos[tot]=(contato*)malloc(sizeof(contato));
		    if(contatos[tot]!=0)
        system("cls");
			cadastrar(contatos[tot]);
		    tot++;
			break;
      case 2:
        printf("== CONSULTANDO CONTATO ==\n");
        printf("Digite um numero de 1 a %d:\n",tot-1);
        scanf("%d",&num);
        if (num >= tot || num == 0) {
          system("cls");
          printf("Numero invalido!\n");
        }else {
          system("cls");
          imprime(*contatos[num]);
          system("pause");
          system("cls");
        }
          break;
        case 3:
          printf("Saindo...\n");
          break;
        default:
          printf("Invalido!");
          menu();
    }
  } while(opcao != 3);
  return 0;
}
