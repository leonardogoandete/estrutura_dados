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
}pessoa[MAX];

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

    printf("\t\tIdade: ");
    scanf("%d", &pessoa[registro].idade);
    setbuf(stdin, NULL);

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
    int i;
    int contagem = 1;
    for(i = 0; i < qtdeContatos; i++){
        printf("\n\tContato nº: %d\n", contagem++);
        printf("\tNome: %s\n", pessoa[i].nome);
        printf("\tIdade: %d\n", pessoa[i].idade);
        printf("\tTelefone: %s\n", pessoa[i].telefone);
        printf("\tEndereco: %s\n", pessoa[i].endereco);
        printf("\tCidade: %s-%s\n", pessoa[i].cidade, pessoa[i].estado);
    }
    printf("\n\n");
}

void exibirContato(int indice){
    printf("\n\tNome: %s\n", pessoa[indice].nome);
    printf("\tIdade: %d\n", pessoa[indice].idade);
    printf("\tTelefone: %s\n", pessoa[indice].telefone);
    printf("\tEndereco: %s\n", pessoa[indice].endereco);
    printf("\tCidade: %s-%s\n\n", pessoa[indice].cidade, pessoa[indice].estado);
}

int pesquisarContato(int qtdeContatos, char* nomeBuscado){
    int i;

    for(i = 0; i < qtdeContatos; i++){
        if(strcmp(nomeBuscado, pessoa[i].nome) == 0)
            return i;
    }
    return -1;
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
            //case 3:
                //printf("\n\tNome: ");
                //scanf("%[^\n]s", nome);
                //indice = pesquisarContato(numeroRegistro, nome);

              //  if(indice >= 0 && indice <= 99)
                //    exibirContato(indice);
              //  else
              //      printf("\n\tContato nao cadastrado!");
              //  break;
            case 3:
                printf("\n\tSaindo...");
                break;
            default:
                printf("Opção invalida!");
                exibirMenu();
        }

    }while(opcaoEscolhida != 3);
}
