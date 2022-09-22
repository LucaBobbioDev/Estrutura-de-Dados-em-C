/*
	Name: ListaLigada
	Author: Luca Bobbio
	Date: 10/03/21 10:53
	Description: Programa para demonstrar a utiliza��o de estruturas (structs) na composi��o de
	uma lista ligada
*/

//Importa��o de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//Definindo o struct 'pessoa'
typedef struct pessoa
{
	char nome;
	int idade;
	float altura;
	struct pessoa *prox;
};

//Fun��o main
int main ()
{
	setlocale(LC_ALL,"");
	
	printf("sizeof registro pessoa=%d\n", sizeof(pessoa));
	
	pessoa *novoRegistro;
	novoRegistro = malloc(sizeof(pessoa));
	
	novoRegistro->nome= 'Ana';
	novoRegistro->idade= 21;
	novoRegistro->altura= 1,63;
	novoRegistro->prox= novoRegistro;
	
	puts("\nDados de Registro armazenados com sucesso!\n");
	
	printf("\nNome: %c", novoRegistro->nome);
	printf("\nIdade: %d", novoRegistro->idade);
	printf("\nAltura: %.2f", novoRegistro->altura);
	printf("\nEndere�o de Mem�ria para o pr�ximo: %c", novoRegistro->nome);	
	
	return 0;
}
