/*
	Name:SelectionSort
	Author: Luca Bobbio
	Date: 12/05/21 10:55
	Description: Fazer a ordenação de dados de um vetor utilizando o algoritmo de Selection Short
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
	int i,j,menor,troca, tam;
	tam=10;
		
	printf("Vetor original:\n");
	for(i=0;i<10;i++)
	printf("%d,",vet[i]);
		
		for(i=0;i<tam;i++)
		{
			menor=i;
			
			for(j=i+1;j<tam;j++)
				{
				if(vet[j]<vet[menor])
				menor=j;
				}
				if(i!=menor)
				{
				troca=vet[i];
				vet[i]=vet[menor];
				vet[menor]=troca;
				}
		}//fim do primeiro for
		
	printf("\nVetor ordenado:\n");
	for(i=0;i<10;i++)
	printf("%d,",vet[i]);
}
