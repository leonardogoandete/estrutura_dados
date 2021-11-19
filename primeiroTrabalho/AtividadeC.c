// Ultima atualizacao Leonardo Goandete 17/11/2021 - 08:26
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20 // define o tamanho do vetor

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

void limpaTela(){
  system("PAUSE"); // adicionei
  system("cls"); // adicionei
  menu();    // adicionei
}
// questao A
void consultaPosicao(){
  int posicao;
  if(contaposicao != 0){
  printf("\nDigite a posicao:\n");
  scanf("%d", &posicao);
  if(posicao > 0 && posicao <= MAX){
    if(posicao <= contaposicao){
    system("cls");
    printf("Posicao consultada: %d\nValor: %d\n",posicao,lista[posicao-1]);
    printf("\nPressione <Enter> para continuar!\n");
  }else{
    if(posicao > contaposicao){
      printf("\nNao existe elemento na posicao a ser consultada\n");
     }
  }
    }else{
    	printf("\nPosicao invalida\n");
    }
  }else{
      printf("\nLista vazia, inserir um item antes de excluir\n");
    }
  limpaTela(); // adicionei
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
                    printf("\nPosicao digitada invalida\n");
                  }
            }else{
                  printf("\nLista cheia, excluir um item antes de inserir\n");
		        }
limpaTela();
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
                printf("\nElemento removido, e atualizado lista\n");
				 }else{
				 	if(posicao > contaposicao){
				 		printf("\nNao existe posicao a ser removida\n");
					 }
				 }
			 }else{
			 	printf("\nPosicao invalida\n");
			 }
       limpaTela();
	}else{
		printf("\nLista vazia, inserir um item antes de excluir\n");
    limpaTela();
	}
} //retiraPosicao()

// Questao D
void qtdeElementos(){
  int i;
  if(contaposicao != 0){
  for (i = 0; i < contaposicao; i++) { }
  system("cls");
  printf("\nTotal de elementos: %d\n\n", i);
  printf("\nPressione <Enter> para continuar!\n");
}else{
  printf("\nLista vazia\n");
}
  limpaTela(); // adicionei
}// qtdeElementos
// questao E
void exibeTodos(){
  int i;
  if(contaposicao != 0){
  system("cls");
  printf("==Lista de Itens==\n");
  for (int i = 0; i < contaposicao; i++) {
        printf("Posicao %d valor= %d\n",i+1, lista[i]);
        printf("\nPressione <Enter> para continuar!\n");
    }
  }else{
  printf("\nNao ha itens a serem exibidos\n");
  printf("\nPressione <Enter> para continuar!\n");
}
limpaTela(); // adicionei
}// exibeTodos()

int main(int argc, char *argv[]) {
	char escolha;
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
        limpaTela(); // adicionei
	}

} while(escolha != 'f'); //condicoes funcionaram por causa do ==

	return 0;
}
