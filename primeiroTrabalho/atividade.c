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
  int contador, j = 0; //criação de um contador pro for e o J vai soma os espaços vazios que ainda não foram preenchidos
  for(contador = 0; contador<MAX; contador++){
  	  if(lista[j] == 0){  //CONTADOR PARA VERIFICAR SE ESTÁ CHEIO
  	  	++j;
		}
  }
  //printf("%d", j);

  if(j == MAX ){//VETOR CHEIO
  	printf("\nVetor cheio, excluir uma posição antes de continuar");
  }else{//continua o programa e pede o valor e posição pra serem inseridos
  	  int valor, i,num;
  printf("Digite a posicao:\n");
  scanf("%d", &num);
    if(num >= 0 && num <= MAX){
      printf("Digite o valor:\n");
      scanf("%d", &valor);
        if (lista[num] != 0) { // testa se tem 0 na posicao
          for (i = 0; i < MAX; i++) { // faz o laço percorrer ate achar a posicao == 0
            if (lista[i] == 0) { // quando for == 0 atribui na lista
              lista[i] = valor;
              break;
            }
          }
      }else {
          lista[num] = valor; // se for igual a 0 ele atribui direto
      }
    }else{
      printf("Posicao invalida");
    }
  }
}

// Questao C
void retiraPosicao(){
  int num;
  printf("Digite a posicao:\n");
  scanf("%d", &num);
  if(num >= 0 && num <= MAX){
    for (int posicaoRemove = 0; posicaoRemove < MAX; posicaoRemove++) {
      if (posicaoRemove == num) {
        for(int i = posicaoRemove; i <= MAX; i++){
          lista[posicaoRemove] = lista[posicaoRemove + i];
        }
      }
    }
  }else{
    printf("Posicao invalida");
  }
} //retiraPosicao()

// Questao D
void qtdeElementos(){
  int cont = 0;
  for (int i = 0; i < MAX; i++) {
    if (lista[i] != 0) {
      cont++;
    }
  }
  printf("Total de elementos: %d", cont);
}// qtdeElementos
// questao E
void exibeTodos(){
  for (int i = 0; i < MAX; i++) {
    if (lista[i] != 0) {
        printf("Posicao %d valor= %d\n",i, lista[i]);
    }
  }
}// exibeTodos()

int main(int argc, char *argv[]) {
	char escolha;
	int i;
    lista[MAX];
    //for(i = 0; i < MAX; i++){//ESSE FOR JOGARÁ ESPAÇO (NOSSO VALOR NULO) EM CADA POSIÇÃO DO VETOR PARA FAZER A VALIDAÇ O NA FUNÇÃO
    	//lista[i] = ' ';
	//}


  lista[0] = 999;
  lista[1] = 888;
  lista[2] = 777;
  lista[3] = 666;
  lista[4] = 555;
  lista[5] = 444;


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
