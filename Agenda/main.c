/* * auala01outubro2019.c
 * Copyright 2019 Luis Antonio <luisdevops@lenovo440>
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pessoa.h"
/* Prototypes */

struct PESSOA *inicio;
void menu();
int main(){
    inicio=NULL; //para futura verificação de inserir ou buscar
    menu();
    return 0;
}
void menu(){
    int opcao;
    do{
        printf(" \n Opções: ");
        printf(" \n 1. Listar as Pessoas" );
        printf(" \n 2. Cadastrar Pessoa" );
        printf(" \n 3. Consultar Pessoa" );
        printf(" \n 4. Alterar Pessoa" );
        printf(" \n 5. Excluir Pessoa" );
        printf(" \n 0. Para sair. \n " );
        printf(" \n Digite a opção desejada: ");
        scanf("%d", &opcao);
        getchar();
        switch(opcao)
        {
            case 1:
                listarPessoa();
                break;
            case 2:
                cadastroPessoa();
                break;
                /*  case 3:
                      consultarPessoa();
                      break;
                  case 4:
                      alterarPessoa();
                      break;
                  case 5:
                      excluir();
                      break;
      */
            default:
                printf(" \n Obrigado por usar o programa. ");
                break;
        }
    }
    while(opcao!=0);
}

/*
criarArquivo(){
    FILE *fAgenda;
    struct PESSOA pessoa;
    fAgenda = fopen ("Agenda.txt", "wb");
    if (fAgenda==NULL){
        printf("\n Erro: impossível abrir o arquivo");
        exit(1);
     }
     printf("\n Entre o numero do registro : ");
     scanf("%d", &pess.indice);
     printf("|n Entro com o nome :");
     fflush(stdin);
     gets(pess.nome);
     fwrite(&pess,sizeof(struct PESSOA),1,fAgenda); //escreve a struc no arquivo em modo binario
     printf("\n\n\tSEUS DADOS FORAM ARMAZENADOS COM SUCESSO!!\n\n");
    fclose(fAgenda);
   };

 lerArquivo(){
    FILE *fAgenda;
    struct PESSOA pessoa;
    fAgenda = fopen ("Agenda.txt", "rb");
    if (fAgenda==NULL){
        printf("\n Erro: impossível abrir o arquivo");
        exit(1);
     }
     fread(&pess,sizeof(struct PESSOA),1,fAgenda); //escreve a struc no arquivo em modo binario
     printf("\nRegistro numero = [%d]", pess.indice);
     printf("\Nome = -- %s --", pess.nome);
    fclose(fAgenda);
   };



apendArquivo(){
    FILE *fAgenda;
    fAgenda = fopen ("Agenda.txt", "a");
    fprintf(fAgenda, "\n%s Ista é uma Agenda\n");
    fclose(fAgenda);
    retunr 0;
   };

lerArquivo(){
    FILE *fAgenda;
    fAgenda = fopen ("Agenda.txt", "rb");
    char singleLine[160];

        while(!feof(fAgenda)){
            fgets(singleLine, 160, fAgenda);
            puts(singleLine);
        }
        fclose(fAgenda);
        return 0;
   };*/
///fflush(stdin); (you always have to clean the buffer before saving chars to a variable)
///gets(pers.nom);
