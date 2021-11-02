#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define MAX 20

//https://www.cprogressivo.net/2013/03/Como-acessar-alterar-e-ler-elementos-de-uma-struct-em-C.html
// https://www.linux.ime.usp.br/~lucasmmg/livecd/documentacao/documentos/mac122/vet.html
int codigo[MAX];

void menu() {
  printf("\nEscolha uma das opcoes abaixo para navegar\n");
	printf("\na - Consultar posicao da lista");
	printf("\nb - Inserir elemento na lista");
	printf("\nc - Retirar elemento da lista");
	printf("\nd - Consultar quantidade de elementos da lista");
	printf("\ne - Exibir itens da lista");
  printf("\nf - Exibir itens da lista\n");
  printf("\nDigite a opcao desejada: ");
}

void inserir(int x){
  printf("%d", x);
}

void consultaPosicao(int x){
  for (int i=0;  i <= MAX; i++) {
    printf("teste: %d\n", codigo[i]);
  }
  printf("%d", x);
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char escolha;
  int num;


	do{
  menu();
  escolha = getchar();


  switch (escolha) {
    case 'a':
      printf("\nTeste2\n");
      printf("Digite o numero a ser consultado: ");
      scanf("%d",&num);getchar();
      consultaPosicao(num);
      break;
    case 'b':
      printf("\nTeste2\n");
      printf("Digite o numero a ser inserido: ");
      scanf("%d",&num);getchar();
      inserir(num);
        break;
    default:
      break;
  }
} while(escolha != 'f');



  }


  // metodo inserir final da lista
