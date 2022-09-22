/*
	Name: PilhaImplementação
	Author: Luca Bobbio
	Date: 07/04/21 09:53
	Description: Programa para demonstrar a utilização de estrutura do tipo pilha
*/

//Importação de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//Sessão de Prototipação
void push(char); //insere um elemento na pilha
char pop(); //retira um elemento da pilha
int isEmpty(); //testa se a pilha está vazia
int isFull();  //testa se a pilha está cheia
char top();  //retorna o elemento que está no topo


//Variáveis Globais
char pilha[5];
int topo=-1;


//Função main
int main()
{
	setlocale(LC_ALL,"");
	
	push('A');
	push('B');
	push('C');
	push('D');
	push('E');
	puts("A Pilha foi carregada com 5 elementos");
	push('Z');
	puts("Desempilhando o elemento que está no topo até ultimo de baixo da pilha:");
	
	while(isEmpty()!= 1)
	{
		char elemento;
		elemento=pop();
		printf("\n%c",elemento);
	}
	
	char r=top();
	push('Z');
	push('Y');
	push('X');
	push('W');
	push('V');
	printf("\nA Pilha foi carregada com novos 5 elementos");
	printf("\nDesempilhando o elemento que está no topo até ultimo de baixo da pilha:");
	
	while(isEmpty()!= 1)
	{
		char elemento;
		elemento=pop();
		printf("\n%c",elemento);
	}

	return 0;
}//fim do main



//Funções para a manipulação dos elementos da Pilha
void push(char elem)
{
	if(isFull()==1)
		puts("Stack overflow - A Pilha já está cheia!!");
	else
	{
		topo++;
		pilha[topo]=elem;
	}
}//fim do push


char pop()
{
	if(isEmpty()==1)
		printf("\nStack Empty - A Pilha está vazia!!");
	else{
	
		char elem;
		elem = pilha[topo];
		topo--;
		return elem;
		}
}//fim do pop


int isEmpty()
{
	if(topo== -1)
		return 1;//true	
	else
		return 0;//false
}//fim do IsEmpty


int isFull()
{
	if(topo==4)
		return 1;//true
	else
		return 0;//false
}//fim do IsFull


char top()
{
	return pilha[topo];
	
}//fim do char top
