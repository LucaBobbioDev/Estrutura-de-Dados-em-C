/*
	Name:BubbleSort
	Author: Luca Bobbio
	Date: 12/05/21 09:21
	Description: Fazer a ordenação de dados de um vetor utilizando o algoritmo de Bubble Short
*/

//Importação de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//Função main
int main()
{
	setlocale(LC_ALL,"");
	
	int vet[10]={63,4,17,-2,95,5,21,10,35,44};
	int n=10;
	int continua, i, aux, fim, troca;
	fim=n;troca=0;
	
	printf("Vetor original:\n");
	for(i=0;i<10;i++)
	printf("%d,",vet[i]);
		
		do{
		continua=0;
			for(i=0;i<fim-1;i++)
			{
				if(vet[i]<vet[i+1])
				{
					aux=vet[i];
					vet[i]=vet[i+1];
					vet[i+1]=aux;
					continua=1;
					troca++;
				}	
			}//fim do for
		
		fim--;
		}while(continua!=0);//fim do do while
	
	printf("\nVetor ordenado:\n");
	for(i=0;i<10;i++)
	printf("%d,",vet[i]);
	
	printf("\n<====Foram feitas %d trocas====>", troca);
	
}// fim do main
