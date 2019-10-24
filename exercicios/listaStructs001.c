#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipo_endereco {
char rua [50];
int numero;
char bairro [20];
char cidade [30];
char estado [3];
long int CEP;
};

struct tipo_cheque {
int numero;
char banco [50];
char agencia [30];
char tipo [12];
};

struct tipo_livro {
char titulo[100];
char autor [80];
char editora [30];
long int ano;
long int isbn;
};

struct tipo_usuario {
char nome[100];
char telefone [20];
char email [40];
struct tipo_endereco end;
struct tipo_cheque cheque;
struct tipo_livro livro;
};

int main(){
struct tipo_usuario *cadastro;

int cont= 0 , i= 0;

    printf("Informe a quantidade de cadastros usados\n");
    scanf("%d", &cont);
    //l cadastro = (struct tipo_usuario *) malloc(cont*sizeof(cadastro));
    getchar();

    for (i = 0; i < cont; i++) {
            printf(" Informe o nome do ususario %d: \n", i+1);
            fgets(cadastro[i].nome,sizeof(cadastro[i].nome),stdin);
            printf(" Informe o numero de telefone: \n");
            fgets(cadastro[i].telefone,sizeof(cadastro[i].telefone),stdin);
            printf(" Informe o email ususario: \n");
            fgets(cadastro[i].email,sizeof(cadastro[i].email),stdin);
            printf("\n---------------------------------------------\n");
            printf(" Informe o endereço ususario \n");
            printf("\n---------------------------------------------\n");
            printf(" \nNome do logradouro: \n");
            fgets(cadastro[i].end.rua,sizeof(cadastro[i].end.rua),stdin);
            printf("\nNumero: \n");
            scanf("%d", &cadastro[i].end.numero);
            getchar();
            printf(" \nBairro: \n");
            fgets(cadastro[i].end.bairro,sizeof(cadastro[i].end.bairro),stdin);
            printf("\nCidade: \n");
             fgets(cadastro[i].end.cidade,sizeof(cadastro[i].end.cidade),stdin);
            printf("\nUF: \n");
             fgets(cadastro[i].end.estado,sizeof(cadastro[i].end.estado),stdin);
            printf("\nCEP: \n");
            scanf("%li", &cadastro[i].end.CEP);
            getchar();
            printf("---------------------------------------------");
            printf("\nNumero do cheque: \n");
            scanf("%d", &cadastro[i].cheque.numero);
            getchar();
            printf("\nNome do Banco: \n");
            fgets(cadastro[i].cheque.banco,sizeof(cadastro[i].cheque.banco),stdin);
            printf("\nAgencia: \n");
            fgets(cadastro[i].cheque.agencia,sizeof(cadastro[i].cheque.agencia),stdin);
            printf("\ntipo de conta: \n");
           fgets(cadastro[i].cheque.tipo,sizeof(cadastro[i].cheque.tipo),stdin);
            printf("---------------------------------------------");
            printf("\nTitutlo do Livro do cadastro: \n");
            fgets(cadastro[i].livro.titulo,sizeof(cadastro[i].livro.titulo),stdin);
            printf("Autor do Livro: \n");
            fgets(cadastro[i].livro.autor,sizeof(cadastro[i].livro.autor),stdin);
            printf("Editora do Livro: \n");
             fgets(cadastro[i].livro.editora,sizeof(cadastro[i].livro.editora),stdin);
            printf("Ano de publicação do Livro: \n");
            scanf("%d", &cadastro[i].livro.ano);
            getchar();
            printf("ISBN do Livro: \n");
            scanf("%d", &cadastro[i].livro.isbn);
            getchar();
            printf("\n-------------------------------------------\n");
    }
     printf("\n\n");
        getchar();
// for para exibir os dados informados
 for (i = 0; i < cont; i++) {
        printf("------------------------------------\n");
        printf("O nome do usuario e: %s \n", cadastro[i].nome);
        printf("O telefone do usuario e: %s \n", cadastro[i].telefone);
        printf("O email do usuario e: %s \n", cadastro[i].email);
        printf("-------------------------------------\n");
        printf("O endereço usuário: %s\t", cadastro[i].end.rua);
        printf("nº: %d \n",cadastro[i].end.numero);
        printf("No Bairro: %s \n",  cadastro[i].end.bairro);
        printf("Na Cidade: %s\n", cadastro[i].end.cidade);
        printf("UF:%s \n", cadastro[i].end.estado);
        printf("CEP:%d \n",cadastro[i].end.CEP);
        printf("\n-------------------------------------\n");
        printf("Numero do cheque do usuario: %d\n", cadastro[i].cheque.numero);
        printf("Banco: %s", cadastro[i].cheque.banco, "\tAgencia: %s \n", cadastro[i].cheque.agencia);
        printf("tipo de conta: \n", cadastro[i].cheque.tipo);
        printf("\n-------------------------------------\n");
        printf("Titutlo do Livro do usuario: %s\n", cadastro[i].livro.titulo);
        printf("Autor do Livro: %s\n", cadastro[i].livro.autor);
        printf("Editora do Livro: %s", cadastro[i].livro.editora, "\tAno da edição: %d", cadastro[i].livro.ano);
        printf("\nISBN do Livro: %d", cadastro[i].livro.isbn);
        printf("\n-------------------------------------\n");
 }
    //free(cadastro);
  return 0;

}
