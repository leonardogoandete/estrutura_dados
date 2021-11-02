#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20 // define o tamanho do vetor
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lista[MAX]; //declaracao vetor
void menu() {
  printf("\nEscolha uma das opcoes abaixo para navegar\n");
	printf("\na - Consultar posicao da lista");
	printf("\nb - Inserir elemento na lista");
	printf("\nc - Retirar elemento da lista");
	printf("\nd - Consultar quantidade de elementos da lista");
	printf("\ne - Exibir itens da lista");
  printf("\nf - Exibir itens da lista\n");
  printf("\nDigite a opcao desejada: ");
} // menu do programa
// questao A
void consultaPosicao(){
  int valor, i,num;
  printf("Digite a posicao:\n");
  scanf("%d", &num);
  for (i = 0; i <= num; i++) {
    valor = lista[i];
  }
  printf("Teste consultaPosicao\n");
  printf("%d\n",valor);
}
// questao B
// ajustar pois esta continuando no loop
void inserePosicao(){
  int valor, i,num;
  printf("Digite a posicao:\n");
  scanf("%d", &num);
  printf("Digite o valor:\n");
  scanf("%d", &valor);
for (i = 0; i <= num; i++) {
  if (lista[i] > 0) {
    printf("%d local utilizado\n", i);
    num++;
  } else if(lista[i] == 0){
      lista[i] = valor;
    }
  }
}

int main(int argc, char *argv[]) {
	char escolha;
  lista[2] = 33;

	do{
  menu();
  scanf("%s", &escolha); //Usei scanf, por que o getchar deu erro, multiplicou duas vezes os printsf de cima

    switch(escolha){
    	case 'a':
    		printf("\nTeste1\n");
        consultaPosicao();
    		break;
    	case 'b':
    		printf("\nTeste2\n");
        inserePosicao();
    		break;
    	case 'c':
    		printf("\nTeste3\n");
    		break;
    	case 'd':
    		printf("\nTeste4\n");
    		break;
    	case 'e':
    		printf("\nTeste5\n");
    		break;
      case 'f':
        system("cls");
        printf("Saindo...");
        break;
    	default:
    		printf("\nErro");
	}

} while(escolha != 'f'); //condições funcionaram por causa do ==

	return 0;
}
