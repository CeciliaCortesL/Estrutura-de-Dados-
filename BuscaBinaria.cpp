#include <iostream>
#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int elemento){
	int inicio = 0;
	int fim = tamanho - 1;
	
	while (inicio <= fim){
		int meio = inicio + (fim - inicio) / 2;
		
		if (arr[meio] == elemento){
			return meio;
		}
		if (arr[meio] > elemento){
			fim = meio - 1;
		}
		else{
			inicio = meio + 1;
		}
	}
	return -1;
}

int main() {
	int arr[] = {2,3,4,5,8};
	int tamanho = sizeof(arr) / sizeof(arr[0]);
	int elemento = 4;
	
	int resultado = buscaBinaria(arr, tamanho, elemento);
	
	if (resultado != -1){
		printf("\n Elemento encontrado na posicao: %d", resultado);
	}
	else{
		printf("\n Elemento nao encontrado");
	}
	return 0;
}
