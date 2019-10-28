/*
	Gravar e carregar struct do arquivo
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100


// declaração da struct pessoa
typedef struct pessoa
{
	char nome[50];
	int idade;
} t_pessoa;


// função para escrever os elementos de uma struct no arquivo
void escrever_arquivo(t_pessoa pessoas[])
{
	int i;
	int len_vet = sizeof(pessoas) - 1; // tamanho do vetor
	FILE * arq;

	// abre o arquivo para escrita no modo append (adiciona ao final)
	arq = fopen("dados.bin", "ab");

	if(arq != NULL)
	{
		for(i = 0; i < len_vet; i++)
			// escreve cada elemento do vetor no arquivo
			fwrite(&pessoas[i], sizeof(t_pessoa), 1, arq);
		fclose(arq); // aborta o programa
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}
}

// função para ler do arquivo
// recebe o vetor que ela irá preencher
// retorna a quantidade de elementos preenchidos
int ler_arquivo(t_pessoa aux_pessoas[MAX])
{
	// abre o arquivo para leitura
	FILE * arq = fopen("dados.bin", "rb");

	if(arq != NULL)
	{
		int indice = 0;
		while(1)
		{
			t_pessoa p;

			// fread ler os dados
			// retorna a quantidade de elementos lidos com sucesso
			size_t r = fread(&p, sizeof(t_pessoa), 1, arq);

			// se retorno for menor que o count, então sai do loop
			if(r < 1)
				break;
			else
				aux_pessoas[indice++] = p;
		}
		fclose(arq); // fecha o arquivo
		return indice;
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}
}

int main(int argc, char *argv[])
{
	// vetor que será escrito no arquivo
	t_pessoa pessoas[] = {{"pedro", 20}, {"maria", 30}, {"catarina", 2}};

	// vetor para onde serão carregados os dados
	// esse vetor foi criado para demonstrar que realmente funciona,
	// mas basta utilizar somente um vetor
	t_pessoa aux_pessoas[MAX];

	escrever_arquivo(pessoas);

	int len_vet = ler_arquivo(aux_pessoas);
	int i;

	// mostrando os elementos do vetor aux_pessoas
	for(i = 0; i < len_vet; i++)
	{
		printf("Nome: %s\n", aux_pessoas[i].nome);
		printf("Idade: %d\n\n", aux_pessoas[i].idade);
	}

	return 0;
}
