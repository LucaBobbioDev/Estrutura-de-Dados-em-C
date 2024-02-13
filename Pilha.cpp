/*
	Name: PilhaImplementa��o
	Author: Luca Bobbio
	Date: 07/04/21 09:53
	Description: Programa para demonstrar a utilização de estrutura do tipo pilha
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void push(char);
char pop();
int isEmpty();
int isFull();
char top();

char pilha[5];
int topo = -1;

int main(){
	setlocale(LC_ALL,"");
	
	push('A');
	push('B');
	push('C');
	push('D');
	push('E');
	puts("A Pilha foi carregada com 5 elementos");
	push('Z');
	puts("Desempilhando o elemento que está no topo até ultimo de baixo da pilha:");
	
	while(isEmpty()!= 1){
		char elemento;
		elemento = pop();
		printf("\n%c",elemento);
	}
	
	char r = top();
	push('Z');
	push('Y');
	push('X');
	push('W');
	push('V');
	printf("\nA Pilha foi carregada com novos 5 elementos");
	printf("\nDesempilhando o elemento que est� no topo até ultimo de baixo da pilha:");
	
	while(isEmpty()!= 1){
		char elemento;
		elemento=pop();
		printf("\n%c",elemento);
	}

	return 0;
}

void push(char elem){
	if(isFull()==1){
		puts("Stack overflow - A Pilha já está cheia!!");
	}else{
		topo++;
		pilha[topo]=elem;
	}
}

char pop(){
	if(isEmpty()==1){
		printf("\nStack Empty - A Pilha está vazia!!");
	}else{
		char elem;
		elem = pilha[topo];
		topo--;
		return elem;
	}
}

int isEmpty(){
	if(topo== -1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(topo==4)
		return 1;
	else
		return 0;
}

char top(){
	return pilha[topo];
	
}
