#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

struct Pessoa{
    char* nome;
    char telefone[17];
    char celular[17];
    char* endereco;
    char aniversario;
} pessoa[MAX];

void exibirMenu(){
    printf("\n\tSelecione umas das opçoes a seguir:\n");
    printf("\t01 - Inserir contato\n"
           "\t02 - Listar contatos\n"
           "\t03 - Sair\n");
}

char* alocarMemoria(int tamanho){
    char* info = NULL;
    info = (char*) malloc(sizeof(tamanho) * sizeof(char));

    if(info == NULL){
        printf("ERRO: impossivel alocar a quantidade de memoria requisitada!");
        exit(1);
    }
    return info;
}

void cadastrarContato(int registro){
    char dados[MAX];
    printf("\n\t\tNome: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].nome = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].nome, dados);

    printf("\t\tTelefone: ");
    scanf("%[^\n]s", pessoa[registro].telefone);
    setbuf(stdin, NULL);

    printf("\t\tEndereco: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].endereco = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].endereco, dados);
}

void listarContatos(int qtdeContatos){
    int i,opcPosicao;
    printf("\tDigite a posicao:\n");
    scanf("%d", &opcPosicao);
    for(i = 0; i < qtdeContatos; i++){
      if(i == opcPosicao){
        printf("\n\tContato nº: %d\n", opcPosicao);
        printf("\tNome: %s\n", pessoa[i].nome);
        printf("\tTelefone: %s\n", pessoa[i].telefone);
        printf("\tEndereco: %s\n", pessoa[i].endereco);
      }
    }
    printf("\n\n");
}

int main(){
    char nome[MAX];
    int numeroRegistro = 0;
    int opcaoEscolhida;
    int indice;

    do{
        exibirMenu();
        printf("\n\tOpcao escolhida: ");
        scanf("%d", &opcaoEscolhida);
        setbuf(stdin, NULL);

        switch(opcaoEscolhida){
            case 1:
                cadastrarContato(numeroRegistro++);
                break;
            case 2:
                listarContatos(numeroRegistro);
                break;
            case 3:
                printf("\n\tSaindo...");
                break;
            default:
                printf("Opção invalida!");
                exibirMenu();
        }

    }while(opcaoEscolhida != 3);
}
