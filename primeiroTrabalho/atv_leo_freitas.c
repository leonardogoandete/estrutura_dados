#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20 // define o tamanho do vetor
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lista[MAX]; //declaracao vetor
int contaposicao = 0;
void menu() {
  printf("\nEscolha uma das opcoes abaixo para navegar\n");
	printf("\na - Consultar posicao da lista");
	printf("\nb - Inserir elemento na lista");
	printf("\nc - Retirar elemento da lista");
	printf("\nd - Consultar quantidade de elementos da lista");
	printf("\ne - Exibir itens da lista");
  printf("\nf - Sair\n");
  printf("\nDigite a opcao desejada: ");
} // menu do programa
// questao A
void consultaPosicao(){
int num;
  printf("Digite a posicao:\n");
  scanf("%d", &num);
  if(num >= 0 && num <= MAX){
    printf("Teste consultaPosicao\n");
    printf("%d\n",lista[num]);
  }else{
    printf("Posicao invalida");
  }
} // consultaPosicao()
// questao B
// ajustar pois esta continuando no loop
void inserePosicao(){
	int posicao, valor, i;
    if(contaposicao != 20){
       printf("Digite a posicao:\n");
       scanf("%d", &posicao);
             if(posicao >= 0 && posicao <= MAX){
                printf("Digite o valor:\n");
                scanf("%d", &valor);
                      if(posicao <= contaposicao){
                      	for(i = MAX - 1 ; i > posicao ; i--) lista[i + 1] = lista[i];
                      	lista[posicao] = valor;
					    }else{
					      	if(posicao > contaposicao){
					  		   lista[contaposicao + 1] = valor;
						    }
					    }
                     }else{
                    	printf("\nPosição inválida");
		          }
	}else{
		printf("\nVetor cheio, excluir uma posição antes de inserir");
	}
	contaposicao++;
}

// Questao C
void retiraPosicao(){


} //retiraPosicao()

// Questao D
void qtdeElementos(){
  int cont = 0;
  for (int i = 0; i < contaposicao; i++) {
    if (lista[i] != 0) {
      cont++;
    }
  }
  printf("Total de elementos: %d", cont);
}// qtdeElementos
// questao E
void exibeTodos(){
  for (int i = 0; i < contaposicao; i++) {
    if (lista[i] != 0) {
        printf("Posicao %d valor= %d\n",i, lista[i]);
    }
  }
}// exibeTodos()

int main(int argc, char *argv[]) {
	char escolha;
	int i;
    lista[MAX];

	do{
  menu();
  scanf("%s", &escolha); //Usei scanf, por que o getchar deu erro, multiplicou duas vezes os printsf de cima

    switch(escolha){
    	case 'a':
        consultaPosicao();
    		break;
    	case 'b':
        inserePosicao();
    		break;
    	case 'c':
        retiraPosicao();
    		break;
    	case 'd':
        qtdeElementos();
    		break;
    	case 'e':
        exibeTodos();
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
