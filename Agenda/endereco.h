/*
 * endereco.c
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


struct ENDERECO{
	int CEP;
	char logradouro[60];
	int numero;
	char complemento[50];
	char bairro[30];
	char cidade [40];
	char UF[03];

};

///int get_string(char *prompt, char *str, size_t size);
///int get_float(char *prompt, float *val);


struct ENDERECO *novoEndereco;

struct ENDERECO* cadastroEndereco(){
	novoEndereco = (struct ENDERECO*)malloc(sizeof(struct ENDERECO));
	//get_string("Enter string: ", str, sizeof(str));
	fflush(stdin);
	printf("Informe o seu CEP: ");
	scanf("%d", &novoEndereco->CEP);
	getchar();
	printf("Informe o Logradouro: ");
	fgets(novoEndereco->logradouro, sizeof(struct ENDERECO),stdin);
	printf("Informe o numero: ");
	scanf("%d", &novoEndereco->numero);
	getchar();
	printf("Informe o complemento: ");
	fgets(novoEndereco->complemento, sizeof(struct ENDERECO),stdin);
	printf("Informe o bairro: ");
	fgets(novoEndereco->bairro, sizeof(struct ENDERECO),stdin);
	printf("Informe a Cidade: ");
	fgets(novoEndereco->cidade, sizeof(struct ENDERECO),stdin);
	printf("Informe a UF: ");
	fgets(novoEndereco->UF, sizeof(struct ENDERECO),stdin);
}
