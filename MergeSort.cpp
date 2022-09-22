/*
	Name: MergeSort
	Author: Luca Bobbio
	Date: 19/05/21 09:23
	Description: Programa para demonstrar o Merge Sort
*/

//Importação de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//Prototipação de funções
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

//Função main
int main(){
	
	setlocale(LC_ALL,"");
	
	int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55};
	int i;
	int final;
	int tamanho;

 	tamanho = sizeof(vet)/sizeof(int); //para calcular o tamanho do vetor (estrutura)
	final = tamanho - 1;
	
	puts("Vetor desordenado");
	for(i = 0; i < 10; i++)
		printf("%d, ", vet[i]);
		
	mergeSort(vet, 0, final);

	puts("\nVetor ordenado com Merge Sort");
	for(i = 0; i < 10; i++)
		printf("%d, ", vet[i]);
	
	return 0;
}// fim do main

void mergeSort(int *V, int inicio, int fim)
{
	int meio;
	if(inicio < fim)
	{
		meio = (inicio + fim)/2;
		//meio = (int) (inicio + fim)/2; //casting para inteiros
		//meio = floor((inicio + fim)/2); //função floor que arredonda para baixo
		mergeSort(V, inicio, meio);
		mergeSort(V, meio+1, fim);
		merge(V, inicio, meio, fim);
	}
}//fim da função mergeSort

void merge(int *V, int inicio, int meio, int fim)
{
	int *temp, p1, p2, tamanho, i, j, k;
	int fim1 = 0;
	int fim2 = 0;
	
	tamanho = fim - inicio+1;
	p1 = inicio;
	p2 = meio + 1;
	temp = (int *) malloc(tamanho * sizeof(int));
	
	if(temp != NULL)
	{
		for(i = 0; i < tamanho; i++)
		{
			if(!fim1 && !fim2)
			{
				if(V[p1] < V[p2])
				temp[i] = V[p1++];
				else
				temp[i] = V[p2++];
				if(p1 > meio)
				fim1 = 1;
				if(p2 > fim)
				fim2 = 1;
			}
				else
				{
					if(!fim1)
					temp[i] = V[p1++];
					else
					temp[i] = V[p2++];
				}
		}
		for(j = 0, k = inicio; j < tamanho; j++, k++)
		V[k] = temp[j];
	}
}//fim da função merge
