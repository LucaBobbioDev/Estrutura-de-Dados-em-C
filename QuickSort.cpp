/*
	Name: QuickSort
	Author: Luca Bobbio
	Date: 19/05/21 09:23
	Description: Programa para demonstrar o Quick Sort
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void quickSort(int *, int, int);
int particionar(int *, int, int);

int main(){
	setlocale(LC_ALL,"");
	
	int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55};
	int i;

 	puts("Vetor desordenado");
	for(i = 0; i < 10; i++)
		printf("%d, ", vet[i]);
	
	quickSort(vet, 0, 10);

	puts("\nVetor Ordenado com Quick Sort");
	for(i = 0; i < 10; i++)
		printf("%d, ", vet[i]);
	
	return 0;
}


void quickSort(int *V, int inicio, int fim){
	int pivo;
	if(fim > inicio){
		pivo = particionar(V, inicio, fim);
		quickSort(V, inicio, pivo-1);
		quickSort(V,pivo+1, fim);
	}
}

int particionar(int *V, int inicio, int fim){
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = fim;
	pivo = V[inicio];
	
	while(esq < dir){
		while(V[esq] <= pivo)
			esq++;
		while(V[dir] > pivo)
			dir--;

		if(esq < dir){
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;
		}
	}
	
	V[inicio] = V[dir];
	V[dir] = pivo;
	
	return dir;
}
