#include <stdio.h>
#define MAX 30
//typedef é um atalho pra nao ter q declarar toda hora "struct Pessoa p"
typedef struct 
{
	char nome[MAX];
	int altura;
	float peso;

} Pessoa;
//funcao que pega os dados da pessoa
Pessoa get_data(){
	Pessoa aux;
	fflush(stdin);

	printf("Digite o nome\n");
	scanf("%[^\n]",aux.nome);
	//funcao para limpar a entrada
	fflush(stdin);
	printf("Digite a altura\n");
	scanf("%d",&aux.altura);
	printf("Digite o peso\n");
	scanf("%f",&aux.peso);
	return aux;
}

void print(Pessoa p){
	printf("Nome: %s\n", p.nome);
	printf("Altura: %d\n", p.altura);
	printf("peso: %.lf\n", p.peso);
}

Pessoa get_mais_pesada(Pessoa *p, int size){
	float peso = 0;
	int index = -1;

	for(int i=0;i<size;i++){
		if(p[i].peso > peso) {
			peso = p[i].peso;
			index = i;
		}
	}

	return p[index];
}

Pessoa get_mais_alta(Pessoa *p, int size){
	float altura = 0;
	int index = -1;

	for(int i=0;i<size;i++){
		if(p[i].altura > altura) {
			altura = p[i].altura;
			index = i;
		}
	}

	return p[index];
}

int main(){

	char aux = 'y';
	int i = 1;
	Pessoa p[MAX];

	Pessoa mais_pesada;
	Pessoa mais_alta;

	printf("Digite os dados das pessoas\n\n");
	p[0] = get_data();

	printf("Adicionar mais uma pessoa ? y/n \n");
	fflush(stdin);
	scanf("%c",&aux);

	while(aux == 'y'){	
		p[i] = get_data();
		fflush(stdin);
		printf("Adicionar mais uma pessoa ? y/n \n");
		scanf("%c",&aux);
		fflush(stdin);
		i++;
	}

	mais_alta = get_mais_alta(p,i);
	mais_pesada = get_mais_pesada(p,i);

	printf("\nPessoas mais pesada %s\nPessoa mais alta: %s\n",mais_pesada.nome, mais_alta.nome);

	return 0;
}