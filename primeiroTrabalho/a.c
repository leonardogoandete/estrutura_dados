int main(int argc, char const *argv[]) {
  char opt,escolha;

  menu();
  opcao();
  return 0;
}


char menu(void){
 char opt;

 printf("\nEscolha uma das opcoes abaixo para navegar\n");
 printf("\na - Consultar posicao da lista");
 printf("\nb - Inserir elemento na lista");
 printf("\nc - Retirar elemento da lista");
 printf("\nd - Consultar quantidade de elementos da lista");
 printf("\ne - Exibir itens da lista\n");
 printf("Opcao: "); scanf("%d", &opt);

 return opt;
}

void opcao (String opt){
do{
  switch(escolha){
    case 'a':
      printf("\nTeste1\n");
      break;
    case 'b':
      printf("\nTeste2\n");
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
    default:
      printf("\nErro");
}

  } while(escolha == 'a' || escolha == 'b' || escolha == 'c' || escolha == 'd' || escolha == 'e');
}
