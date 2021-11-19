#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <math.h>

#define MAX 20 // define o tamanho do vetor

int lista[MAX]; //declaracao vetor
int contaposicao = 0; //variavel auxiliar para controlar o indice do vetor

void menu() {
  printf("\nEscolha uma das opcoes abaixo para navegar\n");
	printf("\na - Consultar posicao da lista");
	printf("\nb - Inserir elemento na lista");
	printf("\nc - Retirar elemento da lista");
	printf("\nd - Consultar quantidade de elementos da lista");
	printf("\ne - Exibir itens da lista");
  printf("\nf - Sair\n");
} // menu do programa

void consultaPosicao(){
    int posicao;
    if(contaposicao != 0){//Variavel deve ser maior que 0 para ser possivel consultar
       printf("\nDigite a posicao: ");
       scanf("%d", &posicao);
             if(posicao > 0 && posicao <= MAX){//Posicao a ser consultada deve estar entre 1 e 20
             	if(posicao <= contaposicao){
                	printf("Teste consultaPosicao\n");
				    printf("%d\n",lista[posicao-1]);
				 }else{
				 	if(posicao > contaposicao){//Posicao a ser consultada deve estar dentro do escopo do que foi inserido na lista
				 		printf("\nNao existe elemento na posicao a ser consultada\n");
					 }
				 }
			 }else{
			 	printf("\nPosicao invalida\n");//Posicoees abaixo de 1 e acima de 20
			 }
	}else{
		printf("\nLista vazia, inserir um item antes de excluir\n");
	}
}// consultaPosicao()
// questao A

void inserePosicao(){
	int posicao, valor, i;//valor = a inserir e i para o contador
    if(contaposicao != 20){//Posicao deve ser menor que 20 para ser possivel inserir
       printf("\nDigite a posicao:");
       scanf("%d", &posicao);
             if(posicao > 0 && posicao <= MAX){//Posicao deve estar no escopo de 1 a 20
                printf("\nDigite o valor:");
                scanf("%d", &valor);
                      if(posicao <= contaposicao){//Verificacao para insercao de elemento no meio ou na ultima posicao da lista
                      	for(i = contaposicao ; i >= posicao-1 ; i--) lista[i] = lista[i - 1];//Elementos que andarao para a direita a partir da posicao digitada
                      	lista[posicao-1] = valor;//atribuira o valor na posicao depois que os elementos andarem
                      	printf("\nValor tomou posicao %d\n", posicao);
						contaposicao++;//incremento do indice
					    }else{
					      	if(posicao > contaposicao){//Verificacao se for maior que o contador do indice do vetor
					  		   lista[contaposicao] = valor;//Caso seja maior, atribuira o valor na posicao do indice (vetor de 0 a 19)
							   printf("\nValor tomou posicao %d\n", contaposicao+1);
							   contaposicao++; //incremento do indice
						    }
					    }
                     }else{
                    	printf("\nPosicao invalida\n");
		          }
	}else{
		printf("\nLista cheia, excluir um item antes de inserir\n");
	}
}//Insere posicao
// Questao B

void retiraPosicao(){
    int posicao, i;
    if(contaposicao != 0){//Verificacao se lista e maior que 0, ou seja, se existe elementos na lista
       printf("\nDigite a posicao: ");
       scanf("%d", &posicao);
             if(posicao > 0 && posicao <= MAX){//Posicao a remover deve estar no escopo de 1 a 20
             	if(posicao <= contaposicao){//Verificacao se posicao a ser removida esta dentro do escopo de itens inseridos
             		for(i = posicao - 1 ; i <= contaposicao ; i++) lista[i] = lista[i+1];//Remocao do valor e elementos a andarem para a esquerda
             		contaposicao--;//decremento do indice que controla a lista
				 }else{
				 	if(posicao > contaposicao){//Verificacao se remocao for maior que elementos inseridos na lista
				 		printf("\nNao existe elemento na posicao a ser removida\n");
					 }
				 }
			 }else{
			 	printf("\nPosicao invalida\n");
			 }
	}else{
		printf("\nLista vazia, inserir um item antes de excluir\n");
	}

} //RetiraPosicao()
// Questao C

void qtdeElementos(){
  int i;
  if(contaposicao != 0){//Verificacao se lista esta vazia para listar elementos
  for (i = 0; i < contaposicao; i++) { }
  printf("\nTotal de elementos: %d\n", i);
  }else{
  printf("\nLista vazia\n");
}
}// QtdeElementos()
// Questao D

void exibeTodos(){
  int i;
  if(contaposicao != 0){
  for ( i = 0; i < contaposicao; i++) {
        printf("Posicao %d valor = %d\n",i+1, lista[i]);
        }
     }else{
    	printf("\nNao ha itens a serem exibidos\n");
     }
}//ExibeTodos()
//Questao E

int main(int argc, char *argv[]) {
	char escolha;//Opcao a ser escolhida no menu
  lista[MAX];

    menu();

	do{
	printf("\nDigite a opcao desejada: ");
    scanf("%s", &escolha);

    switch(escolha){//Caso de escolha do menu
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

} while(escolha != 'f'); //Ira finalizar quando digitar F

	return 0;
}
