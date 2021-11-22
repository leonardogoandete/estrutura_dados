#include<stdio.h>
int main (){
  int x, *px;
  x = 1;
  px = &x;
  printf ("01. x= %d\n", x); // imprime o valor atribuido a variavel X

  printf ("02. px= %u\n", px); // exibe o endereco da memoria em decimal da variavel X

  printf ("03. *px+1= %d\n", *px + 1); // exibe em tela o valor do endereço da memoria da variavel X e soma 1.

  printf ("04. px= %u\n", px); // exibe o endereço da memória da variavel X.

  printf ("05. *px= %d\n", *px); // exibe o valor do endereco da memoria da variavel X.

  printf ("06. *px+=1= %d\n", *px += 1); // atribui + 1 no valor do endereco apontado pelo PX, que é a variavel X.

  printf ("07. px= %u\n", px); // exibe o endereco de memoria da variavel X.

  printf ("08. (*px)++= %d\n", (*px)++); // incrementa +1 no valor do endereco da memoria apontada pelo PX.

  printf ("09. px= %u\n", px); // exibe o endereco da memoria da variavel X.

  printf ("10. *(px++)= %d\n", *(px++)); // incrementa o endereco de memoria.

  printf ("11. px= %u\n", px); // exibe o endereco da memoria da variavel X.

  printf ("12. *px++= %d\n", *px++); // acrecenta 1 byte no enderenco da memoria

  printf ("13. px= %u\n", px); // exibe o endereco da memoria da variavel X.
}
