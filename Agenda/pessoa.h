/*
 * Copyright 2019 Luis Antonio <luisdevops@lenovo440>
 */


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "endereco.h"
#include "contato.h"

struct PESSOA{
    long int cpf;
    char nome[30];
    char nascimento[11];
    struct ENDERECO *endereco;
    struct CONTATO *contato;
    struct PESSOA *proximo;
    struct PESSOA *novaPessoa;
    struct PESSOA *pess;
};
struct PESSOA *novaPessoa, *pess, *ultimo, *endereco, *contato, *inicio;

void listarPessoa();
//void consultarPessoa();
void cadastroPessoa();
//void excluirPessoa();
//void editarPessoa();



void listarPessoa(){
    int indice=0;
    printf("\n****Lista das Pessoas Cadstradas****\n");
    if(inicio==NULL){
        printf("Lista vazia\n");
    }
    else{
        pess=inicio;
        do{
            printf("+++++++++++++++++++++++++++++++\n");
            printf("\t***** registro nº : [%d] ***** \n", indice);
            printf("CPF: %ld\n", pess->cpf);
            printf("NOME: %s", pess->nome);
            printf("NASC: %s", pess->nascimento);
            printf("CEP: %d\n", pess->endereco->CEP);
            printf("LOGRADOURO: %s", pess->endereco->logradouro);
            printf("Nº: %d\n", pess->endereco->numero);
            printf("BAIRRO: %s", pess->endereco->bairro);
            printf("CIDADE: %s", pess->endereco->cidade);
            printf("UF: %s", pess->endereco->UF);
            printf("DDD: %d\n", pess->contato->ddd);
            printf("TF: %d\n", pess->contato->telefone);
            printf("EMAIL: %s", pess->contato->email);
            printf("WEBSITE: %s", pess->contato->paginaweb);
            printf("\n+++++++++++++++++++++++++++++++");
            pess=pess->proximo;
            indice++;
        }while(pess!=NULL);
        printf("\n");
    }
}

void cadastroPessoa(){
    novaPessoa = (struct PESSOA*)malloc(sizeof(struct PESSOA)); // QQ COISA  QUE SEJA DO TIPO PONTEIRO PARA STRUCT PESSOA
    int op;
    do{
        printf("informe o CPF: \n");
        scanf("%ld", &novaPessoa->cpf);
        getchar();
        printf("Informe o nome da pessoa: ");
        fgets(novaPessoa->nome, sizeof(struct PESSOA),stdin);
        printf("Informe a data de nascimento da pessoa (DD/MM/ANO");
        fgets(novaPessoa->nascimento, sizeof(struct PESSOA),stdin);
        novaPessoa->endereco=cadastroEndereco();
        novaPessoa->contato=cadastroContato();
        if(inicio==NULL){
            inicio=novaPessoa;
        }else{
            ultimo=novaPessoa;
            ultimo->proximo=NULL;
        }
        printf("\n1 - Continuar com mais cadastros\n0 - Sair\n");
        scanf("%d", &op);
    }while(op!=0);
    printf("\n\n\tSEUS DADOS FORAM ARMAZENADOS COM SUCESSO!!\n\n");
}
/*
void consultarPessoa() {
    system("clear");
    printf("\n****Lista das Pessoas Cadstradas****\n");
    if(inicio==NULL){
        printf("Lista vazia\n");
    }
    else{
        pess=inicio;
        do{
            printf("%\n+++++++++++++++++++++++++++++++");


    pess = (struct PESSOA*) malloc (sizeof(struct PESSOA));
    printf("Informe O nome da pessoa para buscar: ");
    fgets(pess->nome, sizeof(struct PESSOA),stdin);
    if(nome == pess)
    {

    } else {
        printf("\n Registro não encontrado.");
    }

    return pess;
}
*/

