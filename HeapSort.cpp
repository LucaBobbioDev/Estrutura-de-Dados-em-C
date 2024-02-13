/*
	Name: HeapSort
	Author: Luca Bobbio
	Date: 26/05/21 
	Description: Realizar a ordenação de dados por meio do algoritmo do Heap sort
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void heapSort(int *, int);

int main()
{
	setlocale(LC_ALL,"");
	
	int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55, 83, 29, 104, 62, 15, -77, 23, 11, 45, 192, 9, -5, 10, 31, 65, 83, 49, 102, 62, 115, -7};
	int i, tamanho;
	
	tamanho = sizeof(vet) / sizeof(int);
	puts("Vetor está desordenado");
	for(i = 0; i < tamanho; i++)
		printf((i==0?"| %d |":"%d|"), vet[i]);
	
	heapSort(vet,tamanho);

	puts("\nVetor foi ordenado");
	for(i = 0; i < tamanho; i++)
		printf((i == tamanho-1?"%d":"%d, "), vet[i]);
}


void heapSort(int *V, int tamanho){
	int i = tamanho/2;
	int pai, filho, topo;
	while(1){
		if( i > 0){
			i--;
			topo = V[i];
		}else{
			tamanho--;
			if(tamanho <= 0)
			return;
			topo = V[tamanho];
			V[tamanho] = V[0];
		}

		pai = i;
		filho = (i * 2) + 1;

		while(filho < tamanho){
			if((filho + 1 < tamanho) && (V[filho + 1] > V[filho]))
				filho++;
			if (V[filho] > topo){
				V[pai] = V[filho];
				pai = filho;
				filho = (pai * 2) + 1;
			}else{
				break;
			}
		}
		V[pai] = topo;
	}
}
