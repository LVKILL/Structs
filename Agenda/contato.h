/*
 * contato.c
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
#include <string.h>

struct CONTATO{
	int ddd;
	int telefone;
	char email[30];
	char twitter[20];
	char facebook[30];
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
	printf("Informe o seu facebook : ");
	fgets(novoContato->facebook, sizeof(struct CONTATO),stdin);
	printf("Informe o seu twitter : ");
	fgets(novoContato->twitter, sizeof(struct CONTATO),stdin);
	printf("Informe a sua pagina Web : ");
	fgets(novoContato->paginaweb, sizeof(struct CONTATO),stdin);
}
