/*
 * pessoa.c
 *
 * Copyright 2019 Luis Antonio <luisdevops@lenovo440>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "endereco.h"
#include "contato.h"

struct PESSOA{
    int indice;
	int cpf;
	char nome[21];
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
    system("clear");
    printf("\n****Lista das Pessoas Cadstradas****\n");
    if(inicio==NULL){
        printf("Lista vazia\n");
    }
    else{
        pess=inicio;
        do{
            printf("%\n+++++++++++++++++++++++++++++++");
            printf("\t**** registro nº : [%d] ***** \n", pess->indice);
            printf("%d \n", pess->cpf);
            printf("%s \n", pess->nome);
            printf("%s \n", pess->nascimento);
            printf("%d \n", pess->endereco->CEP);
            printf("%s \n", pess->endereco->logradouro);
            printf("%d \n", pess->endereco->numero);
            printf("%s \n", pess->endereco->complemento);
            printf("%s \n", pess->endereco->bairro);
            printf("%s \n", pess->endereco->cidade);
            printf("%s \n", pess->endereco->UF);
            printf("%d \n", pess->contato->ddd);
            printf("%d \n", pess->contato->telefone);
            printf("%s \n", pess->contato->email);
            printf("%s \n", pess->contato->twitter);
            printf("%s \n", pess->contato->facebook);
            printf("%s \n", pess->contato->paginaweb);
            printf("%\n+++++++++++++++++++++++++++++++");
            pess=pess->proximo;
            pess->indice++;
        }while(pess!=NULL);
        printf("\n");
    }
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
        printf(" \n Gibi %d \n", i+1);
        printf(" \n Código: %d ", Gibi.codrev);
        printf(" \n Descrição: %s ", Gibi.descri);
        printf(" \n Valor: %.2f ", Gibi.valorestm);
    } else {
        printf("\n Registro não encontrado.");
    }

    return 0;
}



*/
//////////////////////////

void cadastroPessoa(){
	novaPessoa = (struct PESSOA*)malloc(sizeof(struct PESSOA)); // QQ COISA  QUE SEJA DO TIPO PONTEIRO PARA STRUCT PESSOA

    // pq a alocação é dinamica = sizeoff -
    // se for sem ponteiro = estatica acesso se da por ponto + elemento = novapessoa.cpf
    int op;
	do{
        printf("informe O cpf: \n");
    	scanf("%d", &novaPessoa->cpf);
    	getchar();
    	printf("Informe O nome da pessoa: ");
    	fgets(novaPessoa->nome, sizeof(struct PESSOA),stdin);
    	printf("Informe a data de nascimento da pessoa (DD/MM/ANO) : ");
    	fgets(novaPessoa->nascimento, sizeof(struct PESSOA),stdin);
    	novaPessoa->endereco=cadastroEndereco();
    	novaPessoa->contato=cadastroContato();
    	if(inicio==NULL){
    		inicio= novaPessoa;
    	}else{
    		ultimo=novaPessoa;
    		ultimo->proximo=NULL;
    	}
    	ultimo->novaPessoa;
     printf("\n1 - Continuar com mais cadastros\n0 - Sair\n");
     scanf("%d%", &op);
    }while(op!=0);
	printf("\n\n\tSEUS DADOS FORAM ARMAZENADOS COM SUCESSO!!\n\n");
}
