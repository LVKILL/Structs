/*
 * contato.c
 *
 * Copyright 2019 Luis Antonio <luisdevops@lenovo440>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CONTATO{
    int ddd;
    int telefone;
    char email[30];
    char paginaweb [60];
};

struct CONTATO *novoContato;

struct CONTATO* cadastroContato(){
    novoContato = (struct CONTATO*)malloc(sizeof( struct CONTATO));
    fflush(stdin);
    printf("Informe o seu DDD : ");
    scanf("%d", &novoContato->ddd);
    getchar();
    printf("Informe o numero do telefone : ");
    scanf("%d", &novoContato->telefone);
    getchar();
    printf("Informe o email : ");
    fgets(novoContato->email, sizeof(struct CONTATO),stdin);
    printf("Informe a sua pagina Web : ");
    fgets(novoContato->paginaweb, sizeof(struct CONTATO),stdin);
    return novoContato;
}