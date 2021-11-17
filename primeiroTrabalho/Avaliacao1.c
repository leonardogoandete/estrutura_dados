// Implementada por Leo Freitas e verificado por Leo Goandete
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

} // menu do programa
// questao A
void consultaPosicao(){
  if(contaposicao != 0){
  int num;
  printf("\nDigite a posicao:\n");
  scanf("%d", &num);
  if(num >= 0 && num <= MAX){
    printf("Teste consultaPosicao\n");
    printf("%d\n",lista[num-1]);
  }else{
    printf("\nPosicao invalida\n");
  }
    }else{
    	printf("\nNao existem posicoes a serem consultadas\n");
	}
} // consultaPosicao()
// questao B
void inserePosicao(){
	int posicao, valor, i;
    if(contaposicao != 20){
       printf("\nDigite a posicao:");
       scanf("%d", &posicao);
             if(posicao > 0 && posicao <= MAX){
                printf("\nDigite o valor:");
                scanf("%d", &valor);
                if (valor != 0) {
                      if(posicao <= contaposicao){
                      	for(i = contaposicao ; i >= posicao-1 ; i--) lista[i] = lista[i - 1];
                      	lista[posicao-1] = valor;
                      	printf("\nValor tomou posicao %d\n", posicao);
						            contaposicao++;
					            }else{
					      	       if(posicao > contaposicao){
					  		         lista[contaposicao] = valor;
							           printf("\nValor tomou posicao %d\n", contaposicao+1);
							           contaposicao++;
						             }
					           }
                }else{
                  printf("\nValor digitado invalido\n");
                }
            }else{
            	printf("\nPosicao invalida\n");
		        }
	 }else{
		printf("\nLista cheia, excluir um item antes de inserir\n");
	 }

}

// Questao C
void retiraPosicao(){
    int posicao, i;
    if(contaposicao != 0){
       printf("\nDigite a posicao: ");
       scanf("%d", &posicao);

             if(posicao > 0 && posicao <= MAX){
             	if(posicao <= contaposicao){
             		for(i = posicao - 1 ; i <= contaposicao ; i++) lista[i] = lista[i+1];
             		contaposicao--;
				 }else{
				 	if(posicao > contaposicao){
				 		printf("\nNao existe posicao a ser removida\n");
					 }
				 }
			 }else{
			 	printf("\nPosicao invalida\n");
			 }
	}else{
		printf("\nLista vazia, inserir um item antes de excluir\n");
	}

} //retiraPosicao()

// Questao D
void qtdeElementos(){
  if(contaposicao != 0){

  int cont = 0;
  for (int i = 0; i < contaposicao; i++) {
    if (lista[i] != 0) {
      cont++;
    }
  }
  printf("\nTotal de elementos: %d\n", cont);
}else{
  printf("\nLista vazia\n");
}
}// qtdeElementos
// questao E
void exibeTodos(){
  if(contaposicao != 0){

  for (int i = 0; i < contaposicao; i++) {
    if (lista[i] != 0) {
        printf("Posicao %d valor= %d\n",i+1, lista[i]);
    }
  }
  }else{
  	printf("\nNao ha itens a serem listados\n");
  }
}// exibeTodos()

int main(int argc, char *argv[]) {
	char escolha;
	int i;
    lista[MAX];

    menu();

	do{
	printf("\nDigite a opcao desejada: ");
    scanf("%s", &escolha); //Usei scanf, por que o getchar deu erro, multiplicou duas vezes os printsf de cima

    switch(escolha){
    	case 'a':
        consultaPosicao();
        printf("--------------------------------------------");
    		break;
    	case 'b':
        inserePosicao();
        printf("--------------------------------------------");
    		break;
    	case 'c':
        retiraPosicao();
        printf("--------------------------------------------");
    		break;
    	case 'd':
        qtdeElementos();
        printf("--------------------------------------------");
    		break;
    	case 'e':
        exibeTodos();
        printf("--------------------------------------------");
    		break;
      case 'f':
        system("cls");
        printf("Saindo...");
        break;
    	default:
    		printf("\nOpcao invalida\n");
	}

} while(escolha != 'f'); //condicoes funcionaram por causa do ==

	return 0;
}
