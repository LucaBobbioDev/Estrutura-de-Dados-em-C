/*
	Name: BuscaSequencial
	Author: Luca Bobbio
	Date: 02/06/21 
	Description: Realizar a busca por um elemento que esteja dentro do vetort
*/

//Importação de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//Função main
int main(){
	setlocale(LC_ALL,"");
	
	int vet[]={7, 23, 11, 45, 92, 9, -5, 0, 31, 55, 83, 29, 104, 62, 15, 9, -13, 10, 31, 65, 83, 49, 102, -62, 115, -7};
	int inicio, fim, achou, tamanho, num;
	
	tamanho= sizeof(vet)/ sizeof(int);//calcula o tamanho do vetor
	inicio=0;
	fim=tamanho-1;
	achou=-1;
	num = 0;
	
	printf("Digite o elemento que deseja buscar:");
	scanf("%d", &num);
	
	while(inicio<=fim)
	{
		if(vet[inicio]==num)
		{
			achou=inicio;
			break;
		}
			inicio++;	
	}
	
	if(achou==-1)
		puts("Elemento não foi encontrado!!");
	else
		printf("O elemento está localizado no índice:%d", achou);
	
}
