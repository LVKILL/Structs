#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ALUNOS 50
typedef struct {
char nome [50];
float notas[4];
int ativo;
} Aluno;

Aluno alunos[MAX_ALUNOS];

void menu();
void cadastrar();
void listar();
void aprovados();
void reprovados();
void pesquisar();
void remover(); //função chamda MENU com retorno tipo VOID e sem parametros

int main () {
    menu();

return 0;
}

void menu(){

    int op;

    do{
        system("clear");
        printf("\n1 - Cadastrar aluno\n2 - Listar alunos");
        printf("\n3 - Pequisar aluno \n4 - Alunos Aprovados");
        printf("\n5 - Alunos Reprovados\n6 - Pequisar aluno");
        printf("\n7 - Remover aluno \n0 - Sair do Programa\n");
        printf("\n----------------------------\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &op);
        getchar();
        switch(op){
        case 1:
            cadastrar();
        break;

        case 2:
            listar();
        break;

        case 3:
            pesquisar();
        break;

        case 4:
            aprovados();
        break;

        case 5:
            reprovados();
        break;

        case 6:
            pesquisar();
        break;

        case 7:
            remover();
        break;

        default:
            printf("Opção incorreta!\n");


        }
        getchar();
    }while(op !=0);

}
void cadastrar(){
    system("clear");
    char nome [50];
    float notas[4];
    int op;
    do{
        printf("Digite o nome do aluno \n");
        fgets(nome,sizeof(nome),stdin);
        printf("\nNota 1º Bimestre: " );
        scanf("%f", &notas[0]);
        printf("\nNota 2º Bimestre: " );
        scanf("%f", &notas[1]);
        printf("\nNota 3º Bimestre: " );
        scanf("%f", &notas[2]);
        printf("\nNota 4º Bimestre: " );
        scanf("%f", &notas[3]);
        for (int i=0; i < MAX_ALUNOS; i++)
        {

            if(alunos[i].ativo==0)
            {
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome);
                alunos[i].ativo=1;
                break;
            }
        }
        printf("\n1 -  Continuar\n0 - Voltar!\n");
        scanf("%d", &op);
        getchar();
    }while(op !=0);
}

void listar(){
    system("clear");
    printf("\n Lista de Alunos: \n");
    for (int i=0; i < MAX_ALUNOS; i++){
            if (alunos[i].ativo==1)
            {
            printf("\nRegistro: %d\n", i+1);
            printf("Nome: %s\n", alunos[i].nome);
            printf("1º Bimestre: %0.2f\n", alunos[i].notas[0]);
            printf("2º Bimestre: %0.2f\n", alunos[i].notas[1]);
            printf("3º Bimestre: %0.2f\n", alunos[i].notas[2]);
            printf("4º Bimestre: %0.2f\n", alunos[i].notas[3]);
           printf("\n------------------\n");
            }
    }

}

void remover(){
    int matricula;
    listar();
    printf("\nQual registro quer remover: \n");
    scanf("%d", &matricula);
    --matricula;
    alunos[matricula].ativo=0;
    printf("\nAluno foi excluído da lista");
    getchar();

}

void aprovados(){
    system("clear");
    float media;
    printf("\n Lista de Alunos Aprovados: \n");
    for (int i=0; i < MAX_ALUNOS; i++){
            if (alunos[i].ativo==1)
            {
                media=0;
                media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
                media = media/4;
                if (media >= 6.0){
                    printf("\nRegistro: %d\n", i+1);
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("1º Bimestre: %0.2f\n", alunos[i].notas[0]);
                    printf("2º Bimestre: %0.2f\n", alunos[i].notas[1]);
                    printf("3º Bimestre: %0.2f\n", alunos[i].notas[2]);
                    printf("4º Bimestre: %0.2f\n", alunos[i].notas[3]);
                    printf("\nMedia do aluno foi %0.2f\n", media);
                    printf("\n------------------\n");
                }

            }
    }
}


void reprovados(){
        system("clear");
        float media;
    printf("\n Lista de Alunos Reprovados: \n");
    for (int i=0; i < MAX_ALUNOS; i++){
            if (alunos[i].ativo==1)
            {
                media=0;
                media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
                media = media/4;
                if (media < 6.0){
                    printf("\nRegistro: %d\n", i+1);
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("1º Bimestre: %0.2f\n", alunos[i].notas[0]);
                    printf("2º Bimestre: %0.2f\n", alunos[i].notas[1]);
                    printf("3º Bimestre: %0.2f\n", alunos[i].notas[2]);
                    printf("4º Bimestre: %0.2f\n", alunos[i].notas[3]);
                    printf("\nMedia do aluno foi %0.2f\n", media);
                    printf("\n------------------\n");
                }

            }
    }
}

void pesquisar(){
    char nome[50];
    int op;
    do{
        system("clear");
        printf("\n Digite o nome para pesquisar\n");
        fgets(nome,sizeof(nome),stdin);
        for (int i=0; i < MAX_ALUNOS; i++)
        {
            if(strstr(alunos[i].nome, nome) != NULL){
               printf("\nRegistro: %d\n", i+1);
                printf("Nome: %s\n", alunos[i].nome);
                printf("1º Bimestre: %0.2f\n", alunos[i].notas[0]);
                printf("2º Bimestre: %0.2f\n", alunos[i].notas[1]);
                printf("3º Bimestre: %0.2f\n", alunos[i].notas[2]);
                printf("4º Bimestre: %0.2f\n", alunos[i].notas[3]);
               printf("\n------------------\n");

               }
        }
        printf("\n1 -  Continuar Pesquisa\n0 - Voltar!\n");
        scanf("%d", &op);
        getchar();
    }while(op!=0);
}
