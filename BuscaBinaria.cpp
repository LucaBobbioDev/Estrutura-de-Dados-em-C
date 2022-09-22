/*
	Name:BuscaBinaria
	Author: Luca Bobbio
	Date: 02/06/21 09:21
	Description: Realizar uma busca binaria por um elemento que esteja dentro do vetor
*/

//Importa��o de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>


//Fun��o main
int main(){
	setlocale(LC_ALL,"");
	
	int vet[]={3, 7, 11, 25, 31, 43, 49,54, 63, 69, 75,81};
	int inicio, meio,fim, achou, tamanho, num;
	
	tamanho= sizeof(vet)/ sizeof(int);//calcula o tamanho do vetor
	inicio=0;
	fim=tamanho-1;
	achou=-1;
	num = 0;
	
	printf("Digite o elemento que deseja buscar:");
	scanf("%d", &num);
	
	while(inicio<=fim)
	{
		meio=(inicio+fim)/2;
		if(num<vet[meio])
			fim =meio-1;
		else if(num>vet[meio])
			inicio=meio+1;
		else
		{
			achou =meio;
			inicio=tamanho;
	 	}
	}// fim do while
	
	
	if(achou==-1)
		printf("\n\nDentre os %d elementos do vetor, o %d n�o foi encontrado", tamanho, num);
	else
		printf("\n\nO elemento est� localizado no �ndice:%d",achou);
	
	return 0;
}
