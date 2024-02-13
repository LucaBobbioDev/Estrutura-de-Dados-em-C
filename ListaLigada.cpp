/*
	Name: ListaLigada
	Author: Luca Bobbio
	Date: 10/03/21 10:53
	Description: Programa para demonstrar a utilização de estruturas (structs) na composição de uma lista ligada
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pessoa {
	char nome;
	int idade;
	float altura;
	struct pessoa *prox;
};

int main (){
	setlocale(LC_ALL,"");
	
	printf("sizeof registro pessoa=%d\n", sizeof(pessoa));
	
	pessoa *novoRegistro;
	novoRegistro = malloc(sizeof(pessoa));
	
	novoRegistro->nome = 'Ana';
	novoRegistro->idade = 21;
	novoRegistro->altura = 1,63;
	novoRegistro->prox = novoRegistro;
	
	puts("\nDados de Registro armazenados com sucesso!\n");
	
	printf("\nNome: %c", novoRegistro->nome);
	printf("\nIdade: %d", novoRegistro->idade);
	printf("\nAltura: %.2f", novoRegistro->altura);
	printf("\nEndereço de Memória para o próximo: %c", novoRegistro->nome);	
	
	return 0;
}
