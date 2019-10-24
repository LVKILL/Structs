/* * endereco.c
 * Copyright 2019 Luis Antonio <luisdevops@lenovo440>
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ENDERECO{
    int CEP;
    char logradouro[60];
    int numero;
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
    printf("Informe o bairro: ");
    fgets(novoEndereco->bairro, sizeof(struct ENDERECO),stdin);
    printf("Informe a Cidade: ");
    fgets(novoEndereco->cidade, sizeof(struct ENDERECO),stdin);
    printf("Informe a UF: ");
    fgets(novoEndereco->UF, sizeof(struct ENDERECO),stdin);
    return novoEndereco;

}
